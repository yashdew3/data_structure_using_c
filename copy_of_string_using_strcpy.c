// C program to copy string from 1 variable to another using strcpy() function.

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100],str2[50];

    printf("Enter string str1\n");
    gets(str1);
    
    strcpy(str2,str1);
    printf("Copied String(str2) is: %s",str2);
}