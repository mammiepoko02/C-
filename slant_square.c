#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);
    for(int r=1;r<=x;r++){
        if(r%3==1){
          for(int c=1;c<=x/3;c++){
            printf("*  ");
          }
         }else if(r%3==2){
            for(int c=1;c<=x/3;c++){
                printf(" * ");
            }
        }
        else {
            for(int c=1;c<=x/3;c++){
                printf("  *");
            }
        }
        printf("\n");

    }
}
