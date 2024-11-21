#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    //เห็นแบบละเอียด
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
            printf("(%d,%d) ",i,j);
        }

        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&i<j){
                printf("%d ",arr[i][j]);
                //printf("(%d,%d)",i,j);
                sum1+=arr[i][j];
            }
        }
        printf("\n");
        for(int s=0;s<=i;s++){
            printf("  ");
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&i>j){
                printf("%d ",arr[i][j]);
                //printf("(%d,%d)",i,j);
                sum2+=arr[i][j];
            }
        }
        printf("\n");

    }
    printf("\n");
    printf("***** WANT ALL_ON+&&ALL_UNDER+ : %d %d *****",sum1,sum2);

}
