#include<stdio.h>
void main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x<=y&&y<=z){
        printf("%d %d %d",x,y,z);
    }else if(y<=x&&x<=z){
        printf("%d %d %d",y,x,z);
    }else if (z<=y&&y<=x){
        printf("%d %d %d",z,y,x);
    }else if(x<=z&&z<=y){
        printf("%d %d %d",x,z,y);
    }else if(y<=z&&z<=x){
        printf("%d %d %d",y,z,x);
    }else if(z<=x&&x<=y){
        printf("%d %d %d",z,x,y);
    }
/*xyz1
xzy1
yxz1
zyx1
yzx1
zxy1*/

}

