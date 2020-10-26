#include <iostream>

#define llInt long long int

using namespace std;

llInt gcd(llInt a, llInt b){
    while(a*b !=0){
        if(a > b){
            a %= b;
        } else {
            b %= a;
        }
    }
    return a+b;
}

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        llInt numberP, numberQ, numberA;
        cin >> numberA >> numberP >> numberQ;
        for(int index = 0; index < gcd(numberP, numberQ); index++){
            cout << numberA;
        }

        cout << endl;

    }
}