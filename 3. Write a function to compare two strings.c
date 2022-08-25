// 3. Write a function to compare two strings.
#include <stdio.h>
#include <string.h>
void output(char[], char[]);
int main()
{
    printf("enter 2 strings\n");
    char str[50], str1[50];
    scanf("%s", str);
    scanf("%s", str1);
    output(str, str1);
    return 0;
}
void output(char str[], char str1[])
{
    printf("Result is = %d", strcmp(str, str1));
}
