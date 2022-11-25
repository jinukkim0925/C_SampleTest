#include <stdio.h>
#include <initializer_list>


int main(){
   
    auto Get =[=](std::initializer_list<char *> aSt1, std::initializer_list<char*> aSt2){
        char* st[] = (char*)aSt1;        
    }; 
    
    auto Set =[=](){
        Get({"1asdfsdaf","2asdfsafd","3asdfadf"}, {"4,fafaf","asdas,","Asfd","df","dsfsd","dsfsd"});
    };
       
    Set();
     
} 
