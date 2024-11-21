#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arrp1[n],arrp2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arrp1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arrp2[i]);
    }
   /* for(int i=0;i<n;i++){
        printf("%d vs",arrp1[i]);
        printf(" %d\n",arrp2[i]);
    }*/
    int cp1=0,cp2=0;
    while(arrp1[n-1]>0&&arrp2[n-1]>0){

       if(arrp1[cp1]>arrp2[cp2]){
            arrp1[cp1]-=arrp2[cp2];
            arrp2[cp2]=0;
            printf("1\n");
            cp2+=1;
       }
       else if(arrp2[cp2]>arrp1[cp1]){
            arrp2[cp2]-=arrp1[cp1];
            arrp1[cp1]=0;
            cp1+=1;
            printf("2\n");
       }
       else{
            arrp1[cp1]=0;
            arrp2[cp2]=0;
            printf("0\n");
            cp1++;
            cp2++;
       }
    }
}
