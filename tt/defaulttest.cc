#include <stdio.h>

int test(int a, int b);
int main(){
    printf("%d\n", test(10));
}

int test(int a, int b = 15){
    return a+b;
}

