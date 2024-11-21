#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i=i+1){
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);

        if(x==y&&y==z&&x==z){
            printf("xyz\n");
        }else if(x==y){
            printf("xy\n");
        }else if(x==z){
            printf("xz\n");
        }else if(y==z){
            printf("yz\n");
        }else if(y>x&&y>z){
            printf("y\n");
        }else if(z>x&&z>y){
            printf("z\n");
        }else if(x>y&&x>z){
            printf("x\n");

        }

    }

}
