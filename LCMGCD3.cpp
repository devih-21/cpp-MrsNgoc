#include <iostream>
#include <vector>

#define module 1000000007
#define llInt long long int

using namespace std;

int gcm(llInt a, llInt b){
    while(a * b != 0){
        if(a > b){
            a %= b;
        } else {
            b%=a;
        }
    }

    return a+b;
}

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int lengthVector;
        cin >> lengthVector;

        vector <llInt> vectorNumber;
        vectorNumber.assign(lengthVector, 0);

        for(int index = 0; index < lengthVector; index++){
            cin >> vectorNumber[index];
        }

        llInt hx = 1;
        for(int index = 0; index < lengthVector; index++){
            hx *= vectorNumber[index];
            hx %= module;
        }

        llInt gcmVector = vectorNumber[0];
        for(int index = 1; index < lengthVector; index++){
            gcmVector = gcm(gcmVector, vectorNumber[index]);
        }
        llInt result = 1;
        for(int index = 1; index <= gcmVector; index++){
            result *= hx;
            result %= module;
        }

        cout << result << endl;
    }
}