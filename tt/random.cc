#include <iostream>
#include <stdio.h>
#include <random>
#include <vector>

using namespace std;

void ResetList(int *aNumList) {
    int i;
    for (i = 0; i < 6; i++) 
        aNumList[i] = 0;
}

void InsertNum(int *aNumArr, float *aNumList){
    int i;
    for (i = 0; i < 6; i++)
        aNumList[aNumArr[i]]++;
}

int main()
{
    int i, j, k;
    int aCheck, aTime = 0;
    float aNumList[46] = {0};
    int aTmpNumList[6];
    int aNumKey[46];
    int aTmpNum = 0;
    int aTmpVec = 0;
    vector<int> aVec;

    printf("로또 회 번호 : ");
    scanf("%d", &aCheck);
    printf("루프 돌 횟수 : ");
    scanf("%d", &aTime);
    for (int i = 0; i < 39; i++) {
        printf("제외할 숫자를 입력해주세요 (없을시 -1) : ");
        scanf("%d", &aTmpVec);
        aVec.push_back(aTmpVec);
        if (aTmpVec == -1)
            break;
    }
    

    // 시드값을 얻기 위한 random_device 생성.
    std::random_device rd;

    // random_device 를 통해 난수 생성 엔진을 초기화 한다.
    std::mt19937 gen(rd());

    // 0 부터 99 까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의.
    std::uniform_int_distribution<int> dis(1, 8145060);
    std::uniform_int_distribution<int> gg(1, 45);
    
    fflush(stdout); 
    
    for (i = 0; i < aTime; i++) {
        ResetList(aTmpNumList); 
        
        for (j = 0; j < 6; j++)
        {
//loop :
            if (dis(gen) == aCheck){
loop:
                aTmpNum = gg(gen);
                
                if (aVec.front() != -1) {
                    for (k = 0; k < aVec.size(); k++) {
                        if (aTmpNum == aVec[k]) {
                            //j--;
                            goto loop;
                        }
                    } 
                }
                
                for (k = 0; k < j; k++) {
                    if (aTmpNumList[k] == aTmpNum) {
                        //j--;
                        goto loop;
                    }
                }
                aTmpNumList[j] = aTmpNum;
            } else {
                j--;
            }
        }
        printf("\r현재 진행률 : %.2f%%", (i + 1) * 1.00 / aTime * 100 );
        fflush(stdout); 
        InsertNum(aTmpNumList, aNumList);
    }
   
    for (i = 1; i < 46; i++) {
        aNumKey[i] = i;
    }
 
    //정렬
    for (i = 1; i < 46; i++) {
        for (j = 1; j < 46 - i; j++) {
            if (aNumList[j] < aNumList[j + 1]) {
                aTmpNum = aNumList[j];
                aNumList[j] = aNumList[j + 1];
                aNumList[j + 1] = aTmpNum;
                
                aTmpNum = aNumKey[j];
                aNumKey[j] = aNumKey[j + 1];
                aNumKey[j + 1] = aTmpNum;
            }
        }
    }
   
    if (aNumList[6] == aNumList[7]) {
        int wtf, holy = 6, holy2 = 7;
         
        for (i = 7; i < 45; i++) {
            if (aNumList[i] == aNumList[i + 1]) {
                holy2++;
            }
        }
        for (i = 6; i > 3; i--) {
            if (aNumList[i] == aNumList[i - 1]) {
                holy--;
            }
        } 

        std::uniform_int_distribution<int> gg(holy, holy2);
        for (i = holy; i < 7; i++) {
            wtf = gg(gen);
            aNumList[wtf] = aNumList[wtf] + 0.5;
        }
    }
    
 
    printf("\n");
    for (i = 1; i < 46; i++) {
        printf("%d/%.1f\n", aNumKey[i], aNumList[i]);
    }

}
