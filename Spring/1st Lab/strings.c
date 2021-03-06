#include "strings.h"

//число раз использования символа
int count(char str[], char ch)
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            j++;
        }
    }
    return j;
}

//количество символов в строке/подстроке
int slen(char str[])
{
    int i = 0;
    while (str[i] != '\0') 
    {
        i++;
    }
    return i;
}

//поиск символа в строке
int schr(char str[], char ch)
{
    int i, idx = -1;
    for (i = 0; (str[i] != '\0') && (str[i] != ch); i++);
    if (str[i] == ch) 
    {
        idx = i;
    }
    return idx;
}

//разбиение строки на поля
int stok(char str[], char delim, int *ptr[])
{
    char *suf = str;
    ptr[0] = str;
    int i, j = 1;
    while ((i = schr(suf, delim)) >= 0) 
    {
        suf[i] = '\0';
        suf = suf + i + 1;
        ptr[j] = suf;
        j++;
    }
    return j;
}

//востановление строки
int suntok(char str[], char delim, char *ptr[], int cnt)
{
    int i;
    for (i = 1; i < cnt; i++) {
        *(ptr[i] - 1) = delim;
    }
}

//посимвольное сравнивание строк
int sequal(char s1[], char s2[])
{
    int i, flg = 1;
    for (i = 0; flg && (s1[i] != '\0' || s2[i] != '\0'); i++) 
    {
        if (s1[i] != s2[i])
            flg = 0;
    }
    return flg;
}

//поиск подстроки в строке
int sstr(char txt[], char p[])
{
    char *suf = txt;
    int len = slen(p);
    int i, pos = -1;
    while (((i = schr(suf, p[0])) >= 0) && (pos < 0)) {
        char tmp;
        suf = suf + i;
        tmp = suf[len];
        suf[len] = '\0';
        if (sequal(suf, p)) {   // посимвольное сравнение строк
            pos = suf - txt;    // разность указателей = индекс
        }
        suf[len] = tmp;
        suf++;
    }
    return pos;
}

//поиск имени диска
int dsearch(char str[])
{
    char disk[] =
        { 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F',
        'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'
    };
    char sufdisk = ':';
    int i = schr(str, sufdisk);
    if (i != -1) 
    {
        int j = schr(disk, str[i - 1]);
        if (j != -1) 
        {
            return i - 1;
        } 
        else 
        {
            return j;
        }
    } 
    else 
    {
        return i;
    }
}

//функция смещения строки
void push(char str[], int len_str, int len)
{
    int t = len_str;
    for (t; t >= 0; t--) 
    {
        str[t + len] = str[t];
    }
}

//приведение к нижнему регистру
char toLowCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch + ('a' - 'A');
    return ch;
}

//копирование строки в строку
void copy(char s1[], char s2[])
{
    for (int i = 0; s1[i] != '\0'; i++)
        s2[i] = s1[i];
}

//вставка /cygdrive/$:
int cygdrive(char str[], int len)
{
    char drive[] = "/cygdrive/";
    int lendrive = slen(drive);
    int idisk = dsearch(str);
    if (idisk != -1) 
    {
        push(str, len, lendrive - 1);
        str[idisk] = toLowCase(str[idisk]);
        char swap = str[idisk];
        copy(drive, str);
        str[lendrive] = swap;
    }
    return idisk;
}

//проверка на запрещённые символы
int forbSymb(char str[])
{
    char symbols[] =
        { '?', '<', '>', '|', '"', '@', ',', '*', '#', ';', '$', '%', '^', '&',
'(',
        ')', '\0'
    };
    int lensymb = slen(symbols);
    int flg = -1;
    for (int i = 0; i < lensymb; i++) 
    {
        flg = schr(str, symbols[i]);
        if (flg != -1) 
        {
            break;
        }
    }
    int len = slen(str);
    for (int j = 0; j < len; j++) 
    {
        if (((str[j] == '\\') && (str[j + 1] == '\\'))
            || ((str[j] == '/') && (str[j + 1] == '/'))) 
        {
            flg = j;
        }
    }
    return flg;
}

//два разделителя подряд
int twoDelim(char str[], char delim)
{
    int flg = -1;
    int len = slen(str);
    for (int j = 0; j < len; j++) {
        if ((str[j] == delim) && (str[j + 1] == delim)) {
            flg = j;
        }
    }
    return flg;
}

//linux разделитель в windows-пути
int wrongSlash(char str[])
{
    int flg = -1;
    if (dsearch(str) != -1)
    {
        int idx = schr(str, '/');
        if (idx != -1)
        {
            flg = idx;
        }
    }
    return flg;
}

//наличие Windows и Linux путей
int pathExist(char str[])
{
    int flg = -1;
    if ((dsearch(str) != -1) || (schr(str, '/') != -1))
    {
        flg = 1;
    }
    return flg;
}

int correctWin(char str[])
{
    int flg = -1;
    int pos = dsearch(str);
    if (pos != -1)
    {
        if (str[pos + 2] == '\\')
        {
            flg = 1;
        }
        else flg = 0;
    }
    return flg;
}