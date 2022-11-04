#include <stdio.h>
#include <stdlib.h>

class TTest
{
    private:
        int fTmp1;
    public:
        TTest(char *st = "");
        ~TTest();
        int fTmp2;
        char *fStr;
        void Add(int aValue);
        int Get(int aNum = 1){
            return 10;
        }
        char* GetStr(int aNum);
};

TTest::TTest(char *st){

}

TTest::~TTest(){

}

char* TTest::GetStr(int aNum = 0){
    
    auto Dfind =[=](){
        Add(10);
    };
    
    return "gg";
}

int main(){
    
    TTest *PTest = new TTest("ASdf");
       
    char *aStr = PTest->GetStr();
    printf("%s\n", aStr );
    printf("%d\n", PTest->Get());
    
}
