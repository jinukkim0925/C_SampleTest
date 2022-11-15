#include <stdio.h>
#include <functional>
void test(int* &a);
void test2(int* a);
void test3(int &a);

typedef enum {
    n1 = -1,
    n2 = 0,
    n3,
    n4,
    n5
} Tnum;

int main(){
    Tnum aTmp, gt = n5;
   
    for (int aTmp = 0; aTmp <= gt; aTmp++){
        printf("%d\n",(Tnum) aTmp);
    }        

    aTmp = n3;
 
    typedef std::function<void(int aa)> gg;
    
    gg gg2;
    
    int aN = 30;
    int *aNum = &aN;
    test(aNum);
    test2(aNum);
    test3(*aNum);

    printf("%d\n", n1); 

}
void test(int* &a){
    printf("%d\n" , *a);  
}
void test2(int* a){
    printf("%d\n" , *a);
}
void test3(int &a){
    printf("%d\n", a);
}
