#include <stdio.h>
#include <functional>
#include <string.h>
#include <iostream>

void TestBind(int* a, int* b){
    a++;
    b++;
}

int TestBind2(int a, int b){
    
    return a * b; 
}

int main(){
   
    int aTmp, a = 10, b = 7;
    
    auto Func = std::bind(TestBind, &a, &b);
    Func();
    
    auto Func2 = std::bind(TestBind2, std::cref(a), b);    
    auto Func3 = std::bind(TestBind2, a, std::placeholders::_1);  
    
    auto Func4 =[=]() -> int
    {
        int aa = Func2();
        return aa;
    };

    aTmp = Func2();
    printf("answer : %d\n", aTmp);
    
    a = 5;
    aTmp = Func2();
    printf("answer : %d\n", aTmp);
    
    aTmp = Func4();
    printf("answer : %d\n", aTmp);
    
    printf("answer : %d\n", Func3(7));
}

