// 2. Write a function to reverse a string.
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
    printf("Reverse of string is = %s", strrev(str));
}