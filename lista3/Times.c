#include <stdio.h>

int main(){
    int nTimes = 5;
    int arrWins[nTimes][nTimes];

    for(int i=0; i<nTimes; i++){
        for(int j=i+1; j<nTimes; j++) arrWins[i][j] = 1;
    }

    //Fazendo o ultimo time ter ao menos uma vitoria
    arrWins[0][nTimes-1] = 0;
    arrWins[nTimes-1][0] = 1;
            

    for(int i=0; i<nTimes; i++){
        for(int j=0; j<nTimes; j++){
            if(arrWins[i][j] == 1) printf("Time %d venceu -> %d\n", i+1, j+1);
        }
    }
}