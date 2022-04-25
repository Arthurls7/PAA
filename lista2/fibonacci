#include <stdio.h>
#include <time.h>

int recursiveFib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return recursiveFib(n-1) + recursiveFib(n-2);
}

int iterativeFib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    int prev1 = 0, prev2 = 1, actualF;
    for(int i=0; i<=n; i++){
        actualF = prev1 + prev2;
        prev1 = prev2;
        prev2 = actualF;
    }

    return actualF;
}

int main(){
    double time_spent = 0.0;
    clock_t begin;
    clock_t end;

    for(int i=0; i<48; i++){
        begin = clock();
        //Só descomentar o que quer rodar
        //recursiveFib(i);
        //iterativeFib(i);
        end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
        printf("%.2lf\n", time_spent);
    }
}
