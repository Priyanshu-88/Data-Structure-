#include<iostream>
using namespace std;

int gcd(int n1, int n2){
    int gcd = 1;
    for(int i = 1; i < min(n1, n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int n1 = 20;
    int n2 = 15;

    int s = gcd(n1, n2);

    cout<<s<<endl;

    return 0;
}