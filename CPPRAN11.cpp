#include <iostream>
#include <vector>
#include <algorithm>

#define llInt long long int

using namespace std;

int main () {
    int testCase;
    cin >> testCase;

    while(testCase-- > 0){
        int lengthVector;

        cin >> lengthVector;

        vector <llInt> vectorNumber;
        vectorNumber.assign(lengthVector, 0);

        for(int index = 0; index < lengthVector; index++){
            cin >> vectorNumber[index];
        }

        sort(vectorNumber.begin(), vectorNumber.end());

        llInt min = vectorNumber[1] - vectorNumber[0];

        for(int index = 2; index < lengthVector; index++){
            if(min > (vectorNumber[index] - vectorNumber[index - 1])){
                min = vectorNumber[index] - vectorNumber[index - 1];
            }


        }

        cout << min;
        cout << endl;
    }
}