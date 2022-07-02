#include<stdio.h>
/*Given an integer value(n) as input, print the number of total even numbers in between -n to
n (inclusive).*/
int main()
{
    int n,count=0;

    printf("Enter The Value Of n: ");
    scanf("%d",&n);

    for(int i=-n;i<=n;i=i+1){

        if(i % 2 == 0){
            count++;

        }

    }

        printf("Total Even Numbers:%d",count);

    return 0;


}
