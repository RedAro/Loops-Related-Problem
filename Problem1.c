#include<stdio.h>

//Write a C program to print all natural numbers from 1 to n.

int main(){

   int n,i=1;

   scanf("%d",&n);

   do{
      printf("%d\n",i);
      i++;
   }

   while(i<=n);

   return 0;
}
