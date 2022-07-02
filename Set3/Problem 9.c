#include<stdio.h>

/*Given the value of three edges(a, b and c), determine whether they can form a triangle or
not.*/

int main()
{
    int a,b,c,sum;

    printf("Enter The Value Of a,b&c: ");
    scanf("%d %d %d",&a,&b,&c);

    sum=a+b;

        if(sum>=c){

            printf("Triangle Can Be Formed");
        }

        else
            printf("Triangle Can Not Be Formed");



    return 0;

}

