#include <stdio.h>

typedef struct _KOSCOM {
    
    int aa;
    char *str;

    struct {
        char *a;
        int b;
        int c;
    } hoga[10];

    
} KOSCOM;

int main(){
    KOSCOM *aPack;
    printf("%d\n", sizeof(aPack->hoga));
}
