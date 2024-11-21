#include<stdio.h>
void passByValue(int y){ // pass by value
    int x = 5;
    x += 10;
    y += 20;
    printf("func : x = %d add : %d\n", x, &x);
    printf("func : y = %d add : %d\n", y, &y);
}
void passByRef(int* x){ // pass by ref.
    *x = 20;
    printf("func : x = %d add : %d\n", *x, x); // * : value of add

}
void main(){
    int x = 5;
    printf("main : x = %d add : %d\n", x, &x);
    int y = 5;
    printf("main : y = %d add : %d\n", y, &y);

    passByValue(y);
    printf("main : x = %d add : %d\n", x, &x);
    printf("main : y = %d add : %d\n", y, &y);

    passByRef(&x);
    printf("main : x = %d add : %d\n", x, &x);

    passByValue(y);
    printf("main : x = %d add : %d\n", x, &x);
    printf("main : y = %d add : %d\n", y, &y);
}

