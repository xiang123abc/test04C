#include <stdio.h>


int fun(int a,int b){

    return  a+b;
}

int main() {
    printf("Hello, World!\n");

    int a =1;
    int b =2;
    int c =  fun(a,b);

    printf("---%d",c);

    return 0;
}
