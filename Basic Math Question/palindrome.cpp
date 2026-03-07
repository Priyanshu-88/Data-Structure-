#include<iostream>
using namespace std;

void checkPalindrome(int n){
    int reverse = 0;
    int org = n;
    while(n > 0){
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n / 10;
    }

    if(reverse == org){
        cout<<"It is a palindrrome"<<endl;
    } else{
        cout<<"Not a palindrome"<<endl;
    }
}

int main(){
    int n = 123321;

    checkPalindrome(n);

    return 0;
}