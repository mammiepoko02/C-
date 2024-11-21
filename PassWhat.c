#include<stdio.h>
void main(){
    int w,e,r,t;
    scanf("%d%d%d%d",&w,&e,&r,&t);
    int x,y,z,q;
    scanf("%d%d%d%d",&x,&y,&z,&q);
    if(x>=w&&y>=e&&z>=r&&q>=t){
        printf("1 2 3 4");
    }else if(x<w&&y>=e&&z>=r&&q>=t){
        printf("2 3 4");
    }else if(x>=w&&y<e&&z>=r&&q>=t){
        printf("1 3 4");
    }else if(x>=w&&y>=e&&z<r&&q>=t){
        printf("1 2 4");
    }else if(x>=w&&y>=e&&z>=r&&q<t){
        printf("1 2 3");
    }else if(x<w&&y<e&&z>=r&&q>=t){
        printf("3 4");
    }else if(x<w&&y>=e&&z<r&&q>=t){
        printf("2 4");
    }else if(x<w&&y>=e&&z>=r&&q<t){
        printf("2 3");
    }else if(x>=w&&y<e&&z<r&&q>=t){
        printf("1 3");
    }else if(x>=w&&y<e&&z>=r&&q<t){
        printf("1 4");
    }else if(x>=w&&y>=e&&z<r&&q<t){
        printf("1 2");
    }else if(x>=w&&y<e&&z<r&&q<t){
        printf("1");
    }else if(x<w&&y>=e&&z<r&&q<t){
        printf("2");
    }else if(x<w&&y<e&&z>=r&&q<t){
        printf("3");
    }else if(x<w&&y<e&&z<r&&q>=t){
        printf("4");
    }
}
