#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int student;
    int input;
    int *score;
    int sum = 0;

    printf("학생의 수는 ? : ");
    scanf("%d",&student);

    score = (int *)malloc(student * sizeof(int));
    
    for (int i = 0; i < student; i++) {
	printf("학생 %d의 점수 : ",i);
        scanf("%d",&input);
        
        score[i] = input;
    }

    for (int i = 0; i < student; i++){
	sum += score[i];
    }

    printf("전체 학생 평균 점수 : %d \n",sum / student);
    free(score);

}
