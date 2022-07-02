#include<stdio.h>
/*Given an integer n as input, calculate the sum up to n-th natural number.*/

int main()
{
    int n,sum=0;

    printf("Enter The Value Of n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum=sum + i;

    }


    printf("SUM=%d",sum);



    return 0;

}
