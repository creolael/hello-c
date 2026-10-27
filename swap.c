#include <stdio.h>
int main () {
int a = 5;
int b = 10;
int temp;

temp = a;
a = b;
b = temp;

printf("a is %d, b is %d", a, b);
return 0;
}
