#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int sumzx=0,sumzy=0,sumzxy=0;
    while(1){
        int z;
        scanf("%d",&z);
        if(z==0||z<0){
            break;
        }
        if(z%x==0&&z%y!=0){
            sumzx=sumzx+z;
            sumzxy=sumzxy+z;

        }else if(z%y==0&&z%x!=0){
            sumzy=sumzy+z;
            sumzxy=sumzxy+z;

        }else if(z%x==0&&z%y==0){
            sumzxy=sumzxy+z;

        }
    }
    printf("%d\n%d\n%d",sumzx,sumzy,sumzxy);
}
