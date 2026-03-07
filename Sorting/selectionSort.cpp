#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int sI =  i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[sI]){
                sI = j;
            }
        }
        swap(arr[sI], arr[i]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {0, 9, 2, 1, 5};
    int n = 5;

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}