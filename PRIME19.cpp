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
  
        long numberFirst, numberLast;

        cin >> numberFirst >> numberLast ;
        if(numberLast > 0 || numberFirst > 0){
            if(numberFirst > numberLast){
                long temp = numberFirst;
                numberFirst = numberLast;
                numberLast = temp;
            }
        for(int index =  numberFirst; index <= numberLast; index++){
            if(isPrime(index)) cout << index << " ";
        }
        }
    }
