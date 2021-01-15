#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long testCase;
    cin >> testCase;
    while(testCase-- > 0){
        long numberTest;
        cin >> numberTest;

        for(long index = 2; index * index <= numberTest; index++){
            while (numberTest % index == 0){
                cout << index << " ";
                numberTest /= index;
            }
        }

        if(numberTest != 1){
            cout << numberTest ;
        }

            cout << endl;

    }
}