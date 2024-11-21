#include<stdio.h>
#include<limits.h>
void main(){
    int k,n;
    scanf("%d%d",&k,&n);
    int sum1=0,max=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum_y=0;
        while(1){
            int y;
            scanf("%d",&y);
            if(y==0){
                break;
            }
            if(y%k==0&&y>0){
                sum_y++;
                if(sum_y>=max){
                    max=sum_y;
                    sum1=i;
                }
            }
       }
    }
    printf("%d %d",sum1,max);
}

