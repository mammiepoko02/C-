#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int sA[5000],sB[5000];
    for(int i=0;i<n;i++){
        scanf("%d",&sA[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&sB[i]);
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        int scoreA=sA[i],scoreB=sB[i];
        if(scoreA==3&&scoreB==1){
            sum2++;
        }else if(scoreB==3&&scoreA==1){
            sum1++;
        }
        else if(scoreA>scoreB){
            sum1++;
        }else if(scoreB>scoreA){
            sum2++;
        }else{
            sum1+=0;
            sum2+=0;
        }
    }
    printf("%d %d\n",sum1,sum2);
    if(sum1>sum2){
        printf("1");
    }else if(sum2>sum1){
        printf("2");
    }else if(sum1==sum2){
        printf("0");
    }
}
