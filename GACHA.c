#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    double sum=0;
    for(int i=1;i<=n;i++){
        arr[i]=0;
    }
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        arr[x]+=1;
        sum++;
    }
    for(int i=1;i<=n;i++){
        printf("No.[%d]%.2f%%\n",i,(arr[i]/sum)*100);
    }
}



