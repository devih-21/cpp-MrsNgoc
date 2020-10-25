#include <iostream>
#include <cmath>

#define lli long long int

using namespace std;


bool isPrime(long number){
    if(number < 2) return false;
    for(int index = 2; index*index <= number; ++index){
        if (number % index == 0) return false; 
    }

    return true;
}

int main(){
    int testCase;
    cin >> testCase;
    while(testCase-- > 0){
        lli number;
        cin >> number;

        for(long index = 1; index * index <= number; index++){
            if(isPrime(index)){
                cout << index*index << " ";
            }
        }

        cout << endl;
    }
}
