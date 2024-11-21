#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int xzy=0, xya=0, xyb=0;

        while(1){
            int z;
            scanf("%d",&z);
            if(z==0){
                break;
            }
            if(x<z&&z<y || y<z&&z<x){
                xzy=xzy+1;

            }else if(z<x&&z<y){
                xya=xya+1;

            }else if(z>x&&z>y){
                xyb=xyb+1;

            }
        }
    printf("%d\n%d\n%d",xzy,xya,xyb);
}
