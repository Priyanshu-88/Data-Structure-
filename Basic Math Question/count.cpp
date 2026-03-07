#include<iostream>
using namespace std;

void printCount(int n){
    int count = 0;
    while(n > 0){
        int lastDigit = n % 10;
        count = count + 1;
        n = n / 10;
    }
    cout<<"The total number of numbers are: "<<count<<" ";
}
int main(){
    int n = 12345;

    printCount(n);

    return 0;
}