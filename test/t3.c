#include <stdio.h>

int main(){
	int arr[2][2] = {{0,1},{2,3}};
	int (*tmp)[2];
	
	tmp = arr;
	
	printf("Test : %d",tmp[0][0]);
}

