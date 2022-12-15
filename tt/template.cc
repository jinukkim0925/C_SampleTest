#include <stdio.h>
template <typename T>
T sum(T a, T b){
    return a + b;
}


int main(){
    printf("%d \n", sum(5,7));
    
    printf("%f \n", sum(5.3,7.4));
}
