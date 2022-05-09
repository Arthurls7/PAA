#include<stdio.h>

int fastExp(int base, int exp){
    if(exp == 0) return 1;
    if(exp%2 == 0){
        int recursive = fastExp(base, exp/2);
        return recursive * recursive;
    } else return base * fastExp(base, exp-1);
}

int main(){

}