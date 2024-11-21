#include<stdio.h>
void main(){
 int n;
 scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        for(int j=1;j<=x;j++){
            if(x%2==0&&x>=0){
                printf("#");
            }else if(x%2!=0&&x>=0){
                printf("*");
            }
        }
        printf("\n");
    }

}

