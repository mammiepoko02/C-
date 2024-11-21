#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int sum=0;
     int sum_=n*2-4;
    for(int i=0;i<n;i++){
        printf("%d",sum);
        printf(" ");
        sum+=1;
        if(sum==10){
            sum=0;
        }
    }
    printf("\n");
    for(int i=0;i<n-2;i++){
        for(int j=0;j<sum_;j++){
            printf(" ");
        }
        printf("%d",sum);
        sum++;
        printf("\n");
        sum_-=2;
        if(sum==10){
            sum=0;
        }
    }
    for(int i=0;i<n;i++){
            printf("%d ",sum);
            sum++;
        if(sum==10){
            sum=0;
        }
    }
}
