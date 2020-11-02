
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

#define llInt long long int

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        llInt lengthVector;
        cin >> lengthVector;
        vector <llInt> vectorNumber;
        vectorNumber.assign(lengthVector, 0);
        for(int index = 0; index < lengthVector; index++){
            cin >> vectorNumber[index];
        }

        llInt sum = 999999999;

        for(int index = 0; index < lengthVector - 1; index++){
            for(int index2 = index + 1; index2 < lengthVector; index2++){
                if(abs(vectorNumber[index] + vectorNumber[index2]) < abs(sum) ) sum = vectorNumber[index] + vectorNumber[index2];
            }
        }

        cout << sum << endl;
    }
}