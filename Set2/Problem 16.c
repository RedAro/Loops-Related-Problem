#include<stdio.h>

/*Write a program that takes two numbers (a and b) as input and swaps those two numbers.*/

int main()
{
    int a,b,temp;

    scanf("%d %d",&a,&b);
    printf("a=%d,b=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("a=%d,b=%d",a,b);

    return 0;


}
