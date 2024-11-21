#include<stdio.h>
void main(){
while(1){
    int x;
    scanf("%d",&x);
    if(x<=0){
        break;
    }
    for(int i=1;i<=x;i++){
        printf("*");
    }
    printf("\n");

}


}
