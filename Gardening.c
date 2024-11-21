#include<stdio.h>
#include<limits.h>
void main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>10){
                arr[i][j]=10;
            }
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=40*arr[i][j];
        }
    }
    int hr_max=0,hr_min=0;
    int max=INT_MIN,min=INT_MAX;
    int per_max=0,per_min=0;
    for(int i=0;i<n;i++){
        hr_max=0;
        hr_min=0;
        for(int j=0;j<m;j++){
            hr_max+=arr[j][i];
            hr_min+=arr[j][i];
        }
        //printf("max:%d min:%d\n",hr_max,hr_min);
        if(max<hr_max){
            max=hr_max;
            per_max=i+1;
        }
        if(min>hr_min){
            min=hr_min;
            per_min=i+1;
        }
    }
    printf("%d\n",sum);
    printf("%d\n%d",per_max,per_min);
}
