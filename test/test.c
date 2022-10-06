#include <stdio.h>
#include "str.h"

int main(){
    char str1[20];
    char str2[20];

    scanf("%s", str1);
    scanf("%s", str2);
  
    if (compare(str1,str2)) {
        printf("%s 와 %s 는 같다.",str1,str2);
    }else {
        printf("%s 와 %s 는 다르다.",str1,str2);
    }

}
