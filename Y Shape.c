#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int space1=0,space2=n-1,space3=n-2;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<space1;j++){
            printf(" ");
        }
        space1++;
        printf("%d",sum);
        if(sum<n/2){
            if(n%2==0){
                for(int j=0;j<space2;j++){
                    printf(" ");
                }
            }
            if(n%2!=0){
                for(int j=0;j<space3;j++){
                    printf(" ");
                }
            }
            printf("%d",sum);
            space2-=2;
            space3-=2;
        }
        sum++;
        printf("\n");
    }
    for(int i=n/2;i<=n;i++){
        for(int j=0;j<space1;j++){
            printf(" ");
        }
        printf("%d",sum);
        sum+=1;
        printf("\n");

    }
}
