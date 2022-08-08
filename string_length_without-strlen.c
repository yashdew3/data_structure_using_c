// C program to find the length of
// string without using strlen function

#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000];
	int i;
	
	printf("Enter the String:\n");
	scanf("%s",str);

	for(i=0; str[i]!='\0'; ++i);

	printf("Length of a string is: %ld",i);

	return 0;
}