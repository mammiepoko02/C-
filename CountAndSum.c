#include<stdio.h>
void main(){
    int k;
    scanf("%d",&k);
    int sumx=0,sumx_k=0,sump_x=0;
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;

        }
        if(x%k==0&&x!=k&&x>0){
            sumx_k++;
            sump_x=sump_x+x;

        }else{

        }
        sumx++;
    }
    printf("%d\n%d\n%d",sumx++,sumx_k,sump_x);

}
