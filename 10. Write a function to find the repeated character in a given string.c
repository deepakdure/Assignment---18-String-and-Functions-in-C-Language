#include <stdio.h>
#include <string.h>
void output(int[], int);
int main()
{
    int i = 0;
    char str[100];
    printf("enter a string = ");
    gets(str);
    int s[256] = {0};
    while (str[i] != '\0')
    {
        s[str[i++]]++;
    }
    output(s, i);
    return 0;
}
void output(int s[], int i)
{
    printf("repeated characters are = ");
    for (i = 0; i < 256; i++)
    {
        if (s[i] != 0)
        {
            printf("%2c ==> %d\n", i, s[i]);
        }
    }
}