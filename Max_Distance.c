#include<stdio.h>
void main(){
    int max_dis=0;
    while(1){
        int min,max;
    scanf("%d%d",&min,&max);
        if(min==0&&max==0){
            break;
        }
        if(min<=0&&max>0){
             max-min;
            if(max_dis<max-min){
                max_dis=max-min;
            }
        }
        else if(min>0&&max>0){
            max-min;
                if(max_dis<max-min){
                max_dis=max-min;
            }
        }
        else if(min<0&&max<=0){
                    min-max;
                if(max_dis<min-max){
                max_dis=min-max;
            }
        }
    }
    printf("%d",max_dis);
}
