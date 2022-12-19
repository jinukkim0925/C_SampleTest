#include <stdio.h>

class aa{
    private :
        int d;
};

bool a1(aa *b){
    bool Result;
    
    Result = (b != NULL);
    if (b == NULL)
        Result = true;
    
    return Result;
}

bool a2(aa *b){
    bool Result;
    
    Result = (b != NULL) && true;
    
    return Result;
}

int main() {

    printf("%s", 9);

    if ('9' == 9)
        printf("Asdf");

    aa *c;
     
    c = NULL;

    printf("%d \n", a1(c));
    printf("%d \n", a2(c));
}
