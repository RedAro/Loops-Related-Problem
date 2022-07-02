#include<stdio.h>

/*Given a year as input, determine whether the year is leap year or not.

For more clarification, check sample input/output.*/
int main()
{
    int year;
    printf("Enter A Valid Year: ");
    scanf("%d",&year);

    if(year % 4 == 0){
        printf("%d is a leap year",year);
    }

    else{

        if(year % 400 == 0){

            if(year % 100 != 0){

                printf("%d is a leap year",year);
            }

            else
                printf("%d is not a leap year",year);

        }

        printf("%d is not a leap year",year);

    }


    getch();

}
