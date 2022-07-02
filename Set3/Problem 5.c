#include<stdio.h>

int main(){

    int number;

    printf("Enter The Value Of n: ");
    scanf("%d",&number);

    for(int i=0;i<=number;i++){

        if(number == i*i){

            printf("%d is a perfect square",number);

             return 0; // same as using break in this case to end the program

        }

    }

          printf("%d is not a perfect square number",number);

     return 0;

}
