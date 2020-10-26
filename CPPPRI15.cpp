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
    int arrPrime[10000];
    arrPrime[0] = 1;
    for(int index = 2; index <= 10000; index++){
            for(int j = 2; index <= index; j++){
              if(isPrime(j) && index % j == 0){
                arrPrime[index - 1] = j;
                break;
              }
          }
        }
    while(testCase--){
        long numberTest;
        cin >> numberTest;
        for(int index = 0; index < numberTest; index++){
          cout << arrPrime[index] << " ";
        }
        cout << endl;
    }
}