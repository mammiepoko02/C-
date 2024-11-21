#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int sumz_xy=0;
    while(1){
        int z;
        scanf("%d",&z);
        if(z<=0){
            break;
        }
        if(x<=z&&z<=y&&x!=y){
            sumz_xy=sumz_xy+z;
        }
        else if(x>=z&&z>=y&&x!=y){
            sumz_xy=sumz_xy+z;
        }


    }
    printf("%d",sumz_xy);
}
