#include <stdio.h>

int main(){

    int i=15;
    float f=2.5;
    char c='z';

    int *ip;
    float *fp;
    char *cp;

    ip=&i;
    fp=&f;
    cp=&c;

    printf("Int value: %d Address: %p\n",*ip,ip);
    printf("Float value: %f Address: %p\n",*fp,fp);
    printf("Char value: %c Address: %p\n",*cp,cp);

    return 0;
}