#include <stdio.h>

void count(int *arr,int n,int *e,int *o);

int main(){

int arr[5]={10,15,20,25,30};
int evencount;
int oddcount;

count(arr,5,&evencount,&oddcount);

printf("Even: %d\n",evencount);
printf("Odd: %d\n",oddcount);

return 0;
}

void count(int *arr,int n,int *e,int *o){

    *e=0;
    *o=0;
    int i;

    for(i=0;i<n;i++){
    if(arr[i]%2==0){
    *e=*e+1;
    }else{
    *o=*o+1;
    }
    }

}