#include <stdio.h>

    int main(){

    int a=100;
    int *p;
    p=&a;

    printf("Before modification: %d\n",a);

    *p=500;

    printf("After modification: %d\n",a);

    return 0;
}