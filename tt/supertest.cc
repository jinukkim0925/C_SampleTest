#include <stdio.h>
class A{
    public :
        void t1();
};
class b : public A{
    private :
        typedef A super;    

    public :
        void t2();

};
void A::t1(){
    printf("printf:A\n");
}
void b::t2(){
    printf("print:b\n");
    super::t1();
}

int main(){
    b Tb;
    
    Tb.t2();

}
