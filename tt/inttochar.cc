#include <stdio.h>
#include <iostream>

void Prt(char *aTmp){
    printf("%s\n", aTmp);
}

int main(){
    int a = 1234;
    char aStr[512] = "";
    
    Prt((char*)a);
    std::sprintf(aStr, "%d", a);
    printf("%s\n", aStr);
}
