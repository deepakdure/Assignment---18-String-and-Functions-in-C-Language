// Write a function to calculate length of the string
#include <stdio.h>
#include <string.h>
void input(char[]);
void output(char[]);
int main()
{
    printf("enter a string\n");
    char str[50];
    input(str);
    output(str);
    return 0;
}
void input(char str[])
{
    gets(str);
}
void output(char str[])
{
    printf("Length of string is = %d", strlen(str));
}