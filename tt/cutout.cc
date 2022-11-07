#include <stdio.h>

struct out1{
    char a[2];
    char b[3];
    char c[5];
};

struct out2{
    char d[3];
    char f[4];  
};

int main(){
    char *aStr = "a1bb3cccc5dd3fff4";
    
    out1 *out = (out1*)aStr;
    printf("%s %s %s \n", out->a, out->b, out->c);
    
    out2 *sub =(out2*) &aStr+8;
    
    printf("%s %s \n", sub->d, sub->f);
    
}
