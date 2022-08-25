// 5. Write a function to transform a string into lowercase
#include <stdio.h>
#include <string.h>
void output(char[]);
int main()
{
    printf("enter a string = ");
    char str[40];
    gets(str);
    output(str);
    return 0;
}
void output(char str[])
{
    printf("Lower String is = %s", strlwr(str));
}