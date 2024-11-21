#include<stdio.h>
#include<limits.h>
void main(){
    int n;
    scanf("%d",&n);
    int y1=0,x1=0;
    int sumx=0,r=0;
    for(int i=1;i<=n;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>y){
            y1=y;
            for(int j=0;j<=x-y;j++){
                printf("%d ",y1);
                y1++;
            }

        }
        else if(y>x){
            x1=x;
            for(int j=0;j<=y-x;j++){
                printf("%d ",x1);
                x1++;
            }
        }
        else{
            printf("%d",y);
        }

    printf("\n");
    }

}
