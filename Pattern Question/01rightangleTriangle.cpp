#include<iostream>
using namespace std;

void printTriangle(int n){
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            if((i+j) % 2 == 0){
                cout<<"0";
            } else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n = 4;

    printTriangle(n);

    return 0;
}