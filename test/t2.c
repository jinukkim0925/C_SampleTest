#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *tmp = arr;
    int sum = 0;

    while (tmp - arr <= 9) {
        sum += (*tmp);
        tmp++;
    }

    printf("평균 : %d\n",sum);

}
