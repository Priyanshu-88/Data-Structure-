#include<iostream>
using namespace std;

void printReverse(int n){
    int reverse = 0;
    while(n > 0){
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n / 10;
    }
    cout<<"The reverse is: "<<reverse<<endl;
}

int main(){
    int n = 1234;

    printReverse(n);

    return 0;
}