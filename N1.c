#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n][n*2-1];
    int sum=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2-1;j++){
            arr[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++){
       arr[n-i-1][0]=sum;
       sum+=1;
        if(sum==10){
            sum=0;
        }
    }
    for(int i=0;i<n;i++){
        if(i!=0){
         arr[i][i*2]=sum;
        sum+=1;
        if(sum==10){
            sum=0;
         }
        }
    }
    for(int i=0;i<n;i++){
        if(n-i-1!=n-1){
        arr[n-i-1][n*2-2]=sum;
        sum+=1;
        if(sum==10){
            sum=0;
         }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2-1;j++){
            if(arr[i][j]!=-1){
             printf("%d",arr[i][j]);
            }
            else if(arr[i][j]==-1){
                printf(" ");
            }
        }
        printf("\n");
    }
}


