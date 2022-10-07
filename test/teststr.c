#include <stdio.h>
#include <string.h>

int main(){

	char str[512]="???";
	
	strcat(strcat(strcat(str,"!!!"),"@@@@@@"),"####");

	printf("%s\n", str);


}
