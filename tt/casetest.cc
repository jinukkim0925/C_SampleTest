#include <stdio.h>

int main(){
    int a = 0;
    switch (a){
        case 1 : printf("a\n");
            break;
        case 2 : {
            printf("asfd\n");
            break;
        }
        case 3 : printf("cc\n"); break;
        default : printf("asfsdf");
    }
}
