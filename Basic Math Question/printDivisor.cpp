#include<iostream>
using namespace std;

void printDivisor(int n){
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            cout<<i;
        }
        cout<<endl;
    }
}

int main(){
    int n = 12;

    printDivisor(n);

    return 0;
}