#include<stdio.h>
void main(){
    int z;
    int x_max=0,x_min=50001;
    while(1){
        int x;
        scanf("%d",&x);
        if(x<=0){

            break;
        }if(x%2!=0){
            if(x>x_max){
                x_max=x;

            }if(x<x_min){
                x_min=x;

            }
        }
    }
    printf("%d\n%d\n%d",x_max,x_min,x_max-x_min);

}


