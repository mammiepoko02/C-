#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    char arr[99][99];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=' ';
        }
    }
    for(int i=0;i<n;i++){
        arr[i][0]='*';
        arr[i][n-1]='*';
    }
    for(int j=0;j<n;j++){
        arr[0][j]='*';
        arr[n-1][j]='*';
    }

    for(int i=0;i<n;i++){
        arr[i][n/2]='*';
        arr[i][n/2+1]='*';
        arr[i][n/2-1]='*';
        arr[i][n/2-2]='*';
        arr[i][n/2+2]='*';
    }
    for(int j=0;j<n;j++){
        arr[n/2][j]='*';
        arr[n/2+1][j]='*';
        arr[n/2-1][j]='*';
        arr[n/2+2][j]='*';
        arr[n/2-2][j]='*';
    }
    for(int t=0;t<n;t++){
        arr[t][t]='*';
        arr[t+1][t+2]='*';
        arr[t+2][t+1]='*';
    }
    for(int t=0;t<n;t++){
        arr[t][n-t-1]='*';
        arr[t+1][n-t-1]='*';
        arr[t+1][n-t-3]='*';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
}
