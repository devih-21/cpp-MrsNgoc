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
    
    while(testCase--){
        long numberTest;
        cin >> numberTest;
        int count = 0;
        for(long index = 0; index <= sqrt(numberTest);index++){
            if(isPrime(index)){
                count++;
            }
        }
        cout << count << endl;
    }
}