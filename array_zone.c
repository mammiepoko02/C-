#include<stdio.h>
void main(){
  int r,c;
  scanf("%d%d",&r,&c);
  int arr[r][c];
  for(int row=0;row<r;row++){
    for(int col=0;col<c;col++){
        scanf("%d",&arr[row][col]);
    }
  }
  int sum1=0;
  for(int row=0;row<r/2;row++){
    for(int col=0;col<c/2;col++){
            sum1+=arr[row][col];
    }
   }
   int sum2=0;
   for(int row=0;row<r/2;row++){
    for(int col=c/2;col<c;col++){
        sum2+=arr[row][col];
    }
   }
   int sum3=0;
   for(int row=r/2;row<r;row++){
    for(int col=0;col<c/2;col++){
        sum3+=arr[row][col];
    }
   }
   int sum4=0;
   for(int row=r/2;row<r;row++){
    for(int col=c/2;col<c;col++){
        sum4+=arr[row][col];
    }
   }

    printf("%d %d\n%d %d",sum1,sum2,sum3,sum4);
}
