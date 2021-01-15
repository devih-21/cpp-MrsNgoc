#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(long number){
    if(number < 2) return false;
    if(number == 2 || number == 3 || number == 5) return true;
    for(int index = 2; index <= sqrt(number); ++index){
        if (number % index == 0) return false; 
    }

    return true;
}

int main(){
    long testCase;
    cin >> testCase;
    while(testCase-- > 0){
        long numberTest;
        cin >> numberTest;
        for(int index = 2; index <= numberTest / 2; index++){
            if(isPrime(index) && isPrime(numberTest- index)){
                cout << index << " " << numberTest - index << endl;
                break;
            }
        }
    }
}