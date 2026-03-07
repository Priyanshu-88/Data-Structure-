#include<iostream>
using namespace std;

void printArmstrong(int n){
    int armstrong = 0;
    while(n > 0){
        int lastDigit = n % 10;
        armstrong = armstrong + (lastDigit * lastDigit);
        n = n / 10;
    }
    cout<<"the armstrong num is: "<< armstrong<<endl;
}

int main(){
    int n = 12;

    printArmstrong(n);

    return 0;
}