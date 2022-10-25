#include <stdio.h>
#include <iostream>
typedef struct {
    char *price[6];
    char *vol[5];
} hoga;

typedef struct {
    hoga shoga[10];
    int pri;
    int tmp;
    char *name;
} KOSCOM;
/*template<typename T>
void SetTest(char *aStr, T *a, T *b){
    printf("%s\n", a->name);    
    auto gg=[=](T d){

    };
}*/
void SetTest(char *t){
template<typename T>
    auto gg=[=](T *a, T *b){
        printf("%s\n", a->name);    
    };

    KOSCOM aPack;
    KOSCOM aData;
    
    aPack.name = "1123";
    aData.name = "3321";
    gg(&aPack, &aData);
}

int main(){
    //template<typename T>
    //auto SetTest2 =[=](char *aStr, T *a, T *b){
     //   printf("%s\n", a.name);    
    //};    
    
    KOSCOM aPack;
    KOSCOM aData;
    char *aTmp = "aa";
    
    aPack.name = "1123";
    aData.name = "3321";
    //SetTest<KOSCOM>("asfd", &aPack, &aData);
    SetTest(aTmp);
    //SetTest2<KOSCOM>("asfd", &aPack, &aData);
    
}
