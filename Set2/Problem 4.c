#include<stdio.h>

//Write a C program to take a character(c) as input and display its ASCII value.

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    printf("The ASCII Value Of %c is:%d",ch,ch);

    return 0;


}
