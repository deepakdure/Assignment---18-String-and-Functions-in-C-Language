// 7. Write a function to check whether a given string is palindrome or not.c
#include <stdio.h>
#include <string.h>
void output(char[]);
int main()
{
	char str[50];
	printf("enter a string = ");
	gets(str);
	output(str);
	return 0;
}
void output(char str[])
{
	int l, i, j;
	for (l = 0; str[l]; l++)
		;
	for (i = 0; i < l / 2; i++)
	{
		if (str[i] == str[l - 1 - i])
		{
			printf("Palindrome String");
			break;
		}
		else
		{
			printf("Not an Palindrome String");
			break;
		}
	}
}