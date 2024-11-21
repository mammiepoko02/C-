#include<stdio.h>
void main(){
    int income=0,expenses=0;
    int sum_in=0,sum_ex=0;
    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }if(x>0){
            income++;
            sum_in=sum_in+x;
        }else if(x<0){
            expenses++;
            sum_ex=sum_ex+x;
        }



        }
        if(sum_in>=(-sum_ex)){
        printf("%d %d\n%d\n%d\ndebit",income,expenses,sum_in,sum_ex);
        }else if(sum_in<(-sum_ex)){
        printf("%d %d\n%d\n%d\ncredit",income,expenses,sum_in,sum_ex);

    }

    }


