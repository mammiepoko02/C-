#include<stdio.h>
void main(){
 float n;
 float un_n=0,nor_n=0,over_n=0,ob_n=0;
 scanf("%d",&n);
 float under_w=0,normal_w=0,over_w=0,ob_w=0;
 for(int i=0;i<n;i++){
    float w,h;
    scanf("%f%f",&w,&h);
    int bmi=w/((h/100)*(h/100));

    if(bmi<18.5){
        under_w=under_w+w;
        un_n++;
    }
    else if (bmi>=18.5&&bmi<=24.9){
        normal_w=normal_w+w;
        nor_n++;
    }

    else if(bmi>=25.0&&bmi<=29.9){
        over_w=over_w+w;
        over_n++;
    }
    else if(bmi>30){
        ob_w+=w;
        ob_n++;

    }
 }
 printf("Underweight %.0f %.2f %.2f%%\n",(float)un_n,(float)under_w/un_n,(double)(un_n/n)*100);
 printf("Normal weight %.0f %.2f %.2f%%\n",(float)nor_n,(float)normal_w/nor_n,(double)(nor_n/n)*100);
 printf("Overweight %.0f %.2f %.2f%%\n",(float)over_n,(float)over_w/over_n,(double)(over_n/n)*100);
 printf("Obesity %.0f %.2f %.2f%%\n",(float)ob_n,(float)ob_w/ob_n,(double)(ob_n/n)*100);
}
