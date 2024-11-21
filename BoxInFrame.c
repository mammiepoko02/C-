#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int r=1;r<=n;r++){
        for(int i=1;i<=n;i++){
            if((r==n-1&&i!=1&&i!=n)
               ||(r==2&&i!=n&&i!=1)
               ||(r!=n&r!=1&&i==2)
               ||(r!=1&&r!=n&&i==n-1)){
                printf(" ");
            }else{
                printf("*");
            }
        }
    printf("\n");
    }
}
