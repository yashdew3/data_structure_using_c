// C program to concatenate two string using strcat() function.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[500],b[500];
	printf("Enter the first string:\n");
	gets(a);
	printf("Enter the second string:\n");
	gets(b);
	strcat(a,b);
	printf("String obtained by concatenation is: %s \n",a);

	return 0;
}