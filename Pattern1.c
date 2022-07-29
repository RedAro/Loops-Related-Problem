#include<stdio.h>

int main(){

    int row,col,n;

    scanf("%d",&n);

    for(row=n;row>=1;row--){

        for(col=1;col<=row;col++){

            printf("%d ",col);
        }
        printf("\n");
    }
    for(row=2;row<=n;row++){

        for(col=1;col<=row;col++){

            printf("%d ",col);
        }
        printf("\n");
    }

    return 0;
}
