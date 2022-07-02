#include<stdio.h>

/*Given a character as input, identify the character as alphabet, number or others.
For more clarification, check sample input/output. */
int main()
{

    char ch;

    printf("Enter The Character: ");
    scanf("%c",&ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){

        printf("%c is an alphabet",ch);

    }

    else if(ch >=0 && ch <= 9){

        printf("It  is a digit");

    }

    else

        printf("OTHERS");



    return 0;

}
