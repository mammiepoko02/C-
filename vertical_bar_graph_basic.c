#include<stdio.h>
#include<limits.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    int max=INT_MIN;
    for (int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
        //printf("arr[%d]:%d ",i,arr1[i]);
    }
    for(int i=0;i<n;i++){
        if(arr1[i]>=max){
            max=arr1[i];
        }
    }
    //printf("Max: %d\n",max);

    char arr2[101][101];
    for (int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            arr2[i][j]='*';

        }
    }
    int sum=0;
    for(int i=0;i<=max;i++){
        for(int j=0;j<=max;j++){
            if(arr1[j]!=arr1[i]){
                arr2[j][sum]=' ';
            }
        }
        sum++;
    }


    for (int i=0;i<max;i++){
        for(int j=0;j<n;j++){
            printf("%c",arr2[i][j]);
        }
        printf("\n");
    }

}
/*max 4

00 01 02 03. 04 05
10 11. 12 13. 14. 15.
20 21. 22. 23. 24. 25.
30. 31. 32. 33.34. 35. */
