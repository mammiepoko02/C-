#include<stdio.h>
void main(){
    int k,n;
    scanf("%d%d",&k,&n);
    int cando=100*k;
    int sum_x=0;

    for(int i=0;i<n;i=i+1){
        int x;
        scanf("%d",&x);


        sum_x=sum_x+x;
        int day=sum_x/cando;
        if(sum_x%cando!=0){
            day=day+1;

        }
        printf("%d\n",day);

    }


}



