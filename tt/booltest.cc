#include<stdio.h>

void print(bool aType) {
    printf("%s\n", aType ? "true" : "false");
}

int main() {
   for (int i = 0; i < 5; i++){
        print(!i);
    } 
}
