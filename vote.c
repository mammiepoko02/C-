#include<stdio.h>
#include<limits.h>
void main(){
     int n,k;
     scanf("%d%d",&n,&k);
     int arr[101];
     for(int i=1;i<=n;i++){
        arr[i]=0;
     }
     int smax=INT_MIN,sum=0,x;
     for(int i=0;i<k;i++){
        scanf("%d",&x);
        arr[x]+=1;
     }
     for(int i=1;i<=n;i++){
        if(arr[i]>smax){
            smax=arr[i];
            sum=i;
        }
    }
        printf("%d\n%d",sum,smax);
}




