#include<stdio.h>
/*Given an integer number as input, print the number of total odd numbers in between 0 to n*/
int main()
{
    int n,count=0;

    printf("Enter The Value Of n: ");
    scanf("%d",&n);


    for(int i=0;i<=n;i++){

        if(i % 2 != 0){
            count++;
        }
    }


        printf("Total ODD Numbers:%d",count);

    return 0;


}
