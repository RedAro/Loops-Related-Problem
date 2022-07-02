#include<stdio.h>

/*Given the value of three edges(a, b and c) of a triangle, determine whether the triangle is
right angled or not.*/

int main()
{
    int a,b,c,sum;

    printf("Enter The Value Of a,b&c: ");
    scanf("%d %d %d",&a,&b,&c);

    sum=a+b;

        if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a)){
            printf("Right Angled Triangle");
           return 0;
        }


        if(a+b>=c && a+c>=b && c+b>=a){
            printf("Triangle");
            return 0;
        }

        printf("Not a Triangle");


    return 0;


}
