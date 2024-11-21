#include<stdio.h>
void main(){
    int k,k1,k2,s1,s2,g;
    scanf("%d%d%d%d%d%d",&k,&k1,&k2,&s1,&s2,&g);

    if(k>k1&&k>k2&&s1>8&&s2>8&&g==1){
        printf("1");
    }else if(k>k1&&k>k2&&s1>8&&s2>8&&g==2){
        printf("2");
    }else if(k<=k1&&k>k2){
        printf("2");

    }else if(k>k1&&k<=k2){
        printf("1");
    }else if(k>k1&&k>k2&&s1<=8&&s2>8){
        printf("2");
    }else if(k>k1&&k>k2&&s2<=8&&s1>8){
        printf("1");
    }
     else {
        printf("0");
    }
}
