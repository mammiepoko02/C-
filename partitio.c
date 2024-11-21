#include<stdio.h>
void main(){
    int w,n;
    scanf("%d%d",&w,&n);

    for(int c1=1;c1<=(w+1)*n+1;c1++){
            printf("*");
       }
    printf("\n");
    for(int c2=1;c2<=n+1;c2++){
            printf("*");
        for(int i=1; i<=w;i++){
            printf(" ");
        }

    }
    printf("\n");
    for(int c3=1;c3<=(w+1)*n+1;c3++){
            printf("*");
       }
    }



