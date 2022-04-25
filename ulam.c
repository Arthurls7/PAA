#include <stdio.h>
#include <time.h>

int longStreak = 0, nLongStreak = 0;
double average = 0;

void ulam(int n){
    int actualSeq = 1, saveSeq1 = 0, saveSeq2 = 0, saveSeq3 = 0, starterN = n;
    
    while(saveSeq1 != 4 && saveSeq2 != 2 && saveSeq3 != 1){
        if(n%2==0) n = n/2;
        else n = (n*3)+1;
        
        saveSeq1 = saveSeq2;
        saveSeq2 = saveSeq3;
        saveSeq3 = n;
        actualSeq++;
    }
    
    if(actualSeq >= longStreak){
        longStreak = actualSeq;
        nLongStreak = starterN;
    }
    
    average += actualSeq;
}


int main() {
    double time_spent = 0.0;
    clock_t begin = clock();

    for(int i=1; i<=65535; i++) ulam(i);
    
    average /= 65535.0;
    
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("Maior sequencia: %d\n", longStreak);
    printf("Numero da maior sequencia: %d\n", nLongStreak);
    printf("Media de numeros: %.2lf\n", average);
    printf("Tempo de exec: %lf", time_spent);
    
	return 0;
}