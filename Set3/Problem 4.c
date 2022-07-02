#include<stdio.h>

/*Description: Write a C program that takes an integer number(x) as input and determines whether the
number is odd or even.*/
//this code is written  my me.

int main(){

    int x;

    printf("Enter The Value Of X: ");
    scanf("%d",&x);

    if(x % 2 == 0){
        printf("EVEN");//arnob
    }

    else
        printf("ODD");

    return 0;


}
