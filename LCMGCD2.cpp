#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int gcd(long long numberFirst, long long numberLast) 
{ 
    if (numberLast == 0) 
    return gcd(numberLast, numberFirst % numberLast); 
} 

int main(){
    int testCase;
    cin >> testCase;
    while(testCase-- > 0){
        long numberTest;
        cin >> numberTest;
        long long answerReturn = 1;
        for(int index = 1; index <= numberTest; index++){
            answerReturn = (answerReturn * index)/( gcd(answerReturn, index) );
        }
        cout << answerReturn << endl;
    }
}

