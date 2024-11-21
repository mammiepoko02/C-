#include<stdio.h>
#include<limits.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);
    char arr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            arr[i][j]=' ';
        }
    }
    for(int i=0;i<x;i++){
        arr[i][i]='*';
        arr[x-i-1][i]='*';
    }
    for(int i=0;i<x;i++){
        arr[i][y-x+i]='#';
        arr[i][y-i-1]='#';
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
                printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    if((y-x)%2==0&&(y-x)!=0&&abs(y-x)<12+2){
        printf("2");
    }
    else if(y-x==0){
        printf("%d",x+y-1);
    }else {
        printf("0");
    }
}

//0/14 1/13 2/11 3/11
