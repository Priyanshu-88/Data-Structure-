#include<iostream>
using namespace std;

void printArray(int n){
    bool isPrime = true;
    if(n <= 1){
        isPrime = false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout<<"Is prime Number"<<endl;
    } else{
        cout<<"not a prime Number";
    }
}

int main(){
    int n = 2;

    printArray(n);

    return 0;
}