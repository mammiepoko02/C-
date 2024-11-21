#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int n1=0,c=0;
    for(int i=0;i<n;i++){
        n1=n-i;
        for(int space=1;space<=c;space++){
                printf(" ");
        }
        c++;
        if(n1>=10){
            for(int c=1;c<=n1;c++){
                printf("%d",n1%10);
            }
        }
        if(n1<10&&n1>0){
            for(int j=1;j<=n1%10;j++){
                printf("%d",n1);
            }
        }
        printf("\n");
    }

}
