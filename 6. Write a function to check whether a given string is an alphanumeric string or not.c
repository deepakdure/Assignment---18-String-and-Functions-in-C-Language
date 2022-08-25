// 6. Write a function to check whether a given string is an alphanumeric string or not
#include <stdio.h>
#include <string.h>
void output(char[]);
int main()
{
    int i;
    char str[50];
    printf("enter a string = ");
    gets(str);
    output(str);
    return 0;
}
void output(char str[])
{
    int i, a, b;
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            a = 1;
        if (str[i] >= '0' && str[i] <= '9')
            b = 1;
    }
    if (a == 1 && b == 1)
        printf("Alphanumeric String");
    else
        printf("Not an Alphanumeric String");
}