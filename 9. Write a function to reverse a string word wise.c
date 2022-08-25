#include <stdio.h>
#include <string.h>
void output(char[], int, int);
int main()
{
    int i = 0, a = 0, e = 0, c = 0;
    char str[50] = " my name is deepak kumar";
    while (str[i] != '\0')
    {
        while (str[i] != ' ')
        {
            if (str[i] == '\0')
            {
                c++;
                break;
            }
            e++;
            i++;
        }
        output(str, a, e - 1);
        if (c == 1)
            break;
        a = e++;
        i++;
    }
    output(str, 0, i - 1);
    printf("%s", str);
    return 0;
}
void output(char str[], int a, int e)
{
    char t;
    while (a <= e)
    {
        t = str[a];
        str[a] = str[e];
        str[e] = t;
        a++;
        e--;
    }
}