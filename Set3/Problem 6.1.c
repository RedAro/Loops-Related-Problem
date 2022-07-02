#include<stdio.h>

/*Write a C program that takes a character as input and determines whether it is a vowel or
consonant*/

int main(){

    char ch;

    printf("Enter The Character: ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){

        printf("\n'%c' is a vowel\n",ch);
    }


    else
        printf("\n'%c' is a consonant\n",ch);

     return 0;

}
