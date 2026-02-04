#include <stdio.h>

int main() {

    int a=10;
    int *p;
    p=&a;

    printf("Value of the variable: %d\n",a);
    printf("Address of the variable: %p\n",&a);
    printf("Value stored in the pointer: %p\n",p);
    printf("Value pointed to by the pointer: %d\n",*p);
    
    return 0;
}