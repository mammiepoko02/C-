#include <stdio.h>
void main() {
 int x;
 scanf("%d", &x);
 int i;
 int count = 0;
 for(i = 2; i < x; i += 2) {
 if(x % i != 0) {
 ++count;
 }
 }
 printf("%d\n", count);
}
