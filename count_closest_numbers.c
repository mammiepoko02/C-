#include<stdio.h>
#include<limits.h>
void main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int min_distance=INT_MAX;
    int nub=0,d1=0;
    for(int i=0;i<n;i++){
        d1=abs(arr[i]-k);
        if(d1<min_distance){
                min_distance=d1;
                nub=0;
                nub++;

        }else if(d1==min_distance){

            nub++;
        }
    }
    printf("%d\n%d",min_distance,nub);
}
