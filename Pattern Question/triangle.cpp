#include<iostream>
using namespace std;

void printTriangle(int n){
    for(int i = 0; i <=n; i++){
        for(int j = 0; j < n-i; j++){
            cout<<" ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*";
        }
        for(int j = 0; j < n-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 4;

    printTriangle(n);

    return 0;
}