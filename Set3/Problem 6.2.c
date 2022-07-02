#include<stdio.h>

/*Write a C program that takes a character as input and determines whether it is a vowel or
consonant or other symbols.*/

int main(){

    char ch;

    printf("Enter The Character: ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is a vowel",ch);
        return 0;
    }

    // Show error message if c is not an alphabet
    else if (!isalpha(ch)){
        printf("OTHERS");
    }

    else  {
         printf("%c is a consonant",ch);
    }

    return 0;

}
