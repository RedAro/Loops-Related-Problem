#include<stdio.h>

/*Description: Write a C program to take two integer number (x and y) as input and display the bigger
one.*/

int main(){

    int x,y;

    printf("Enter The Value Of X & Y: ");
    scanf("%d %d",&x,&y);

    if(x>y){

        printf("\n%d\n",x);
    }

    else
        printf("\n%d\n",y);

    return 0;

}
