#include<stdio.h>
void main(){
    int k;
    scanf("%d",&k);
    int arr[k][k];
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum1=0;
    for(int x=0;x<(k+1)/2;x++){ //���鹷ӵͺ���դӵͺ(k+1)/2���
        int sum2=0;
        for(int i=k/2-x;i<=k/2+x;i++){
            for(int j=k/2-x;j<=k/2+x;j++){
            sum2+=arr[i][j];
            }

    }
      printf("%d\n",sum2-sum1);
      sum1=sum2;
    }

}
