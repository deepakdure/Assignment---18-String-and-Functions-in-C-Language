#include <stdio.h>
void output(char[]);
int main()
{
    char s[50];
    printf("enter a string = ");
    gets(s);
    output(s);
}
void output(char s[])
{
    int i = 0, c = 0, check = 0;
    while (s[i])
    {
        if (s[i] == ' ')
        {
            if (check != 0)
                c++;
            check = 0;
        }
        else
        {
            check++;
        }
        i++;
    }
    if (check != 0)
        c++;
    printf("Total Numbers of Word = %d", c);
}
