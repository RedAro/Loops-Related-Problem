#include<stdio.h>

/*Description: Write a C program to take an integer number(x) as input. Print “Positive” if x>0. If x<0
then print “Negative”. Otherwise print “Zero”.

[N. B. Do not print the quotation.]*/

int main(){

    int x;
    printf("Enter The Value Of X: ");
    scanf("%d",&x);

    if(x>=0){

        printf("Non-Negative\n");
    }

    else
        printf("Negative");

    return 0;

}
