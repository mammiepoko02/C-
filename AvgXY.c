#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    double sumxy=0;
    int nub=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=x&&arr[i]<=y){
            sumxy+=arr[i];
            nub++;
        }else {
            sumxy+=0;
            nub+=0;
        }
    }
    if(nub!=0){
    printf("%d\n%.2lf",nub,sumxy/nub);
    }else if(nub==0){
        printf("0\nnone");
    }


}

