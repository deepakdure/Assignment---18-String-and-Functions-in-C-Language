// 4. Write a function to transform string into uppercase
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
    printf(" Upper String is = %s", strupr(str));
}