#include <stdio.h>

int main(){
	char st[] = {"hello"};
	printf("문자열의 길이 : %d \n",str_lenght(st));
}
int str_lenght(char *str){
	int i = 0;
	
	while (str[i]){
		i++;
	}
	
	return i;
}
