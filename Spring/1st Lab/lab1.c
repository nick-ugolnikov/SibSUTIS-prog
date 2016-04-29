#include <stdio.h>
#include <stdlib.h>
#include "strings.h"

#define DEBUG 0

void input(char str[], char *delim);
void check(char str[], char delim);
void process(char str[], char delim);
void output(char str[]);

int main()
{
    char str[MAX_LENGTH];
    char delim;
    input(str, &delim);
    check(str, delim);
    process(str, delim);
    output(str);
    return 0;
}

void input(char str[], char *delim)
{
    printf("Input delim: ");
    scanf("%c%*c", delim);
    __fpurge(stdin);
    printf("Input paths: ");
    fgets(str, 1024, stdin);
}

void check(char str[], char delim)
{
//убирает пробел перед строкой
    while (str[0] == ' ') 
    {
        for (int i = 0; str[i] != '\0'; i++) 
        {
            str[i] = str[i + 1];
        }
    }

    int ok2delim = twoDelim(str, delim);
    if (ok2delim != -1) {
        printf("Warning! Two delim! '%c%c' idx '%d %d'\n", str[ok2delim],
               str[ok2delim + 1], ok2delim, ok2delim + 1);
    }

    int length = slen(str);
    if (length > MAX_LENGTH) {
        printf("Excess path length!\nMAX_long:%d!\n", MAX_LENGTH);
        exit(EXIT_FAILURE);
    }

    // int okexist = pathExist(str);
    // if (okexist != 1)
    // {
    //     printf("There's no Windows/Linux path!\n");
    //     exit(EXIT_FAILURE);
    // }
}

void process(char str[], char delim)
{
    int size = count(str, delim);
    int *ptr[size + 1][MAX_PATH];
    int isize[size + 1];
    int len = slen(str);
    int i;

    isize[0] = stok(str, delim, ptr[0]);
#if (DEBUG == 1)
    printf("Paths = %d\n", isize[0]);
    for (i = 0; i < isize[0]; i++) 
    {
        printf("adr_ptr [0][%d] = %d\n", i, ptr[0][i]);
        printf("Path [0][%d] = %s\n", i, ptr[0][i]);
    }
#endif

    int errors[isize[0]];
    for (i = 0; i <= isize[0]; i++)
    {
        errors[i] = 0;
    }

//check paths
    for (i = 0; i < isize[0]; i++) 
    {
        int pathsize = slen(ptr[0][i]);
        if (pathsize > MAX_PATH) 
        {
            printf("Warning! Excess path %d length!\nMAX_long:%d!\n", i + 1,
                   MAX_PATH);
            errors[i] = 1;
        }
        else if ( (pathsize + DELTA > MAX_PATH) && (dsearch(ptr[0][i]) != -1) )
        {
            printf("Warning! Excess path %d output length!\nMAX_long: %d\n", i + 1,
                MAX_PATH);
            errors[i] = 1;
        }

        int flgsymb = forbSymb(ptr[0][i]);
        if (flgsymb != -1) 
        {
            printf("Forbidden symbol! idx '%d' '%c' path %d\n",
                   flgsymb + 1,
                   str[((ptr[0][i] - ptr[0][0]) * sizeof(int)) + flgsymb],
                   i + 1);
            errors[i] = 1;
        }

        int wslash = wrongSlash(ptr[0][i]);
        if (wslash != -1)
        {
            printf("Wrong Windows-path! idx '%d' path %d\n",
                wslash + 1,
                i + 1);
            errors[i] = 1;
        }

        int okexist = pathExist(ptr[0][i]);
        if (okexist != 1)
        {
            printf("This path is not compatible with Windows/Linux: path %d\n", 
                i + 1);
            errors[i] = 1;
        }

        int okwin = correctWin(ptr[0][i]);
        if (okwin == 0)
        {
            printf("This path is not compatible with Windows: path %d\n",
                i + 1);
            errors[i] = 1;
        }

        int ddot = count(ptr[0][i], ':');
        if (ddot > 1)
        {
            printf("This path is not compatible with Windows/Linux: path %d\n", 
                i + 1);
            errors[i] = 1;
        }
    }

    char sl = '\\';

    int j, tmp = 1;

    for (i = 1; i <= isize[0]; i++) 
    {
        if (errors[i - 1] != 1) 
        {
            isize[tmp] = stok(ptr[0][i - 1], sl, ptr[i]);
#if (DEBUG == 1)
            printf("isize-%d = %d\n", tmp, isize[tmp]);
            for (j = 0; j < isize[tmp]; j++) 
            {
                printf("adr_ptr[%d][%d] = %d\n", i, j, ptr[i][j]);
                printf("isize [%d][%d] = %s\n", i, j, ptr[i][j]);
            }
#endif
            tmp++;
#if (DEBUG == 1)
            printf("\n");
#endif
        } 
        else 
        {
            ptr[i][0] = ptr[0][i - 1];
            isize[tmp] = 1;
            tmp++;
        }
    }

    for (i = 1; i <= isize[0]; i++) 
    {
        for (j = 0; j < isize[i]; j++) 
        {
            if (errors[i - 1] != 1) 
            {
                int flg = cygdrive(ptr[i][j], len);
            }
            int k = i;
            int p = j;
            int position = (ptr[i][j] - ptr[1][0]) * sizeof(int);
            int move = slen(ptr[i][j]);
            int step = position + move + 1;
            if (p != (isize[i] - 1)) 
            {
                p++;
                ptr[k][p] = &(str[step]);
#if (DEBUG == 1)
                printf("ptr [%d][%d] = %s\n", k, p, ptr[k][p]);
#endif
            } 
            else if (k != isize[0]) 
            {
                k = i + 1;
                p = 0;
                ptr[k][p] = &(str[step]);
#if (DEBUG == 1)
                printf("ptr [%d][%d] = %s\n", k, p, ptr[k][p]);
#endif
            }
#if (DEBUG == 1)
            printf("ptr[%d][%d]\n", i, j);
            printf("ptr [%d][%d] = %s\n", i, j, ptr[i][j]);
            printf("ptr [%d][%d] = %d\n", i, j, ptr[i][j]);
            printf("position %d\n", position);
            printf("move %d\n", move);
            printf("step %d\n", step);
            printf("cdrv [%d][%d] = %s\n", k, p, ptr[k][p]);
            printf("adrv [%d][%d] = %d\n", k, p, ptr[k][p]);
            printf("\n");
#endif
        }
        ptr[0][i - 1] = ptr[i][0];
    }


    for (i = 1; i <= isize[0]; i++) 
    {
        suntok(str, '/', ptr[i], isize[i]);
    }
    suntok(str, delim, ptr[0], isize[0]);
}

void output(char str[])
{
    printf("New paths: %s\n", str);
}