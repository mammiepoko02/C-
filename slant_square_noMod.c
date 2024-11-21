#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);

    for(int r=1;r<=x/3;r++){
        for(int c=1;c<=x/3;c++){
         printf("*  ");
        }
        printf("\n");
        for(int c=1;c<=x/3;c++){
            printf(" * ");
        }
        printf("\n");
        for(int c=1;c<=x/3;c++){
            printf("  *");
        }
        printf("\n");
    }

}
