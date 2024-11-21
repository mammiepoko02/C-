#include<stdio.h>
void main(){
    int nxg=0, nxp=0, sumaxg=0, sumaxp=0;
    int x,a ;
    while(1){

        scanf("%d",&x);
        if(x==0){
            break;
        }
        scanf("%d",&a);
        if(x==1){

            nxg=nxg+1;
            sumaxg=sumaxg+a;

        }
        if (x==2){
            nxp=nxp+1;
            sumaxp=sumaxp+a;

        }

    }

    printf("%d %d\n%d %d %d ",nxg,nxp,sumaxg,sumaxp,sumaxg-sumaxp);
}
