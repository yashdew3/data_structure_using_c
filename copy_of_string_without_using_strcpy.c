// C program to copy string from 1 variable to another without using strcpy() function.

#include<stdio.h>


int main()
{
	char s1[1000], s2[1000], i;
	printf("Enter string S1:");
	fgets(s1, sizeof(s1), stdin);

	for(i=0; s1[i]!='\0'; ++i)
	{	
		s2[i]=s1[i];
	}
	
	s2[i]='\0';
	printf("String S2:%s", s2);
	return 0;
}