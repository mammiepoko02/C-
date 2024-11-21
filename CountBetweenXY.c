#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int sumx_y=0;
    while(1){
        int z;
        scanf("%d",&z);
        if(z<0){
            break;
        }if(x<=z&&z<=y&&x!=y){
            sumx_y=sumx_y+1;
        }if(x>=z&&z>=y&&x!=y){
            sumx_y=sumx_y+1;
        }
    }
    printf("%d",sumx_y);

}
