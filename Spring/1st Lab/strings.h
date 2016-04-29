#ifndef STRINGS_H
#define STRINGS_H

#define MAX_LENGTH 1024
#define MAX_PATH 20
#define DELTA 11

int count(char str[], char ch);

int slen(char str[]);
int schr(char str[], char ch);
int stok(char str[], char delim, int *ptr[]);
int suntok(char str[], char delim, char *ptr[], int cnt);
int sequal(char s1[], char s2[]);
int sstr(char txt[], char p[]);
void copy(char s1[], char s2[]);

int dsearch(char str[]);
void push(char str[], int len_str, int len);
char toLowCase(char ch);
int cygdrive(char str[], int len);

int forbSymb(char str[]);
int wrongSlash(char str[]);
int twoDelim(char str[], char delim);
int pathExist(char str[]);
int correctWin(char str[]);

#endif
