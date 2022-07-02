#include<stdio.h>>

/*Write a C program to take three integer numbers (x, y and z) as input and display the
medium one.*/

int main()
{
    int x,y,z;

    printf("Enter The Value Of X,Y&Z: ");
    scanf("%d %d %d",&x,&y,&z);

        if(x>y && x<z){

            printf("%d is the medium one",x);
        }

        else if(y>x && y<z){

            printf("%d is the medium one",y);
        }

        else
            printf("%d is the medium one",z);


   return 0;

}
