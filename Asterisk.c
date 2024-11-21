#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    char arr[n][n];
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=' ';
        }
    }
    for(int i=0;i<n;i++){
        arr[i][n/2]='*';
        arr[i][i]='*';
        arr[i][n-i-1]='*';
        arr[n/2][i]='*';
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}

//mid 05 15 25 23 45 55 65 75 85 95 105
//
