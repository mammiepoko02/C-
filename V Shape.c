#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int sum_1=0,sum_2=n*2-1;

    for(int i=0;i<=n;i++){
        for(int j=0;j<sum_1;j++){
            printf(" ");
        }
        printf("%d",i);

        if(i!=n){
            for(int i=0;i<sum_2;i++){
                printf(" ");
            }
            sum_2-=2;
            printf("%d",i);
        }
        printf("\n");
        sum_1+=1;
    }
}




