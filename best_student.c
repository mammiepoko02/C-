#include<stdio.h>
#include<ctype.h>
#include<limits.h>

typedef struct{
    char ID[9];
    char name[31];
    char surname[51];
    double y;
}student;
void main(){
    int n;
    scanf("%d",&n);
    student s[n];
    for(int i=0;i<n;i++){
        scanf("%s%s%s%lf",&s[i].ID,&s[i].name,&s[i].surname,&s[i].y);
    }
    double max=INT_MIN;
    for(int i=0;i<n;i++){
        if(s[i].y>max){
            max=s[i].y;
        }
    }
   for(int i=0;i<n;i++){
        if(s[i].y==max){
            printf("%s %s %s %.2lf",s[i].ID,s[i].name,s[i].surname,s[i].y);
        }
    }
}
