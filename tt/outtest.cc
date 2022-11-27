#include <stdio.h>

typedef struct _out {
    int a;
    int b;
    char c;
} out;

typedef struct _out_sub {
    int a;
    int b;
    char c;
    bool d;
    char e;
} out_sub;

int main(){
    
    out *o1;
    out_sub *o2;
    
    printf("%d %d %d %d\n", &o1, &o2, sizeof(o1), sizeof(o2));
        
}
