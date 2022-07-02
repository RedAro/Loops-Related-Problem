#include<stdio.h>

/*Write a C program to take two integer number (x and y) as input and display the output in
the given format.*/

int main()
{
    int x,y,temp;

    scanf("%d %d",&x,&y);

    temp=x;
    x=y;
    y=temp;

    printf("%d %d",x,y);

    return 0;


}
