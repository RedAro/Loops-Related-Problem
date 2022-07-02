#include<stdio.h>
/*Given an integer number as input, print the number of total even numbers in between 0 to n*/

int main()
{
   int n,count=0;

   printf("Enter The Value Of n: ");
   scanf("%d",&n);

   for(int i=1;i<=n;i=i+1){

        if(i % 2 == 0){
            count++;

        }
   }

    printf("Total Even Number:%d",count);


    return 0;

}
