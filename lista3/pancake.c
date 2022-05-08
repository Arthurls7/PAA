#include <stdio.h>

int findMaxIndex(int arr[], int n){
    int maxIndex = 0;
    for(int i=0; i<n; i++) if(arr[i] > arr[maxIndex]) maxIndex = i;

    return maxIndex;
}

void flip(int arr[], int n){
    int actual, start = 0;

    while (start < n){
        actual = arr[start];
        arr[start] = arr[n];
        arr[n] = actual;
        start++;
        n--;
    }
}

void pancake(int arr[], int n){
    for(int i=n; i>1; i--){
        int maxIndex = findMaxIndex(arr, i);
        
        //verifica se o elemento ja esta ordenado
        if(maxIndex != i-1){
            flip(arr, maxIndex);
            flip(arr, i-1);
        }
    }
}


void printArr(int arr[], int n){
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
}

int main(){
    int n = 7;
    int arr[7] = {2, 3, 1, 6, 4, 5, 7};

    printf("Starter array: ");
    printArr(arr, n);

    pancake(arr, n);

    printf("\nFinal array: ");
    printArr(arr, n);

    return 0;
}
