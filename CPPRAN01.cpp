#include <iostream>
#include <vector>

#define llInt long long int

using namespace std;

int main () {
    int testCase;
    cin >> testCase;

    while(testCase-- > 0){
        int lengthVector, testCaseLeftRight;
        cin >> lengthVector >> testCaseLeftRight;

        vector <llInt> vectorNumber;
        vectorNumber.assign(lengthVector, 0);

        for(int index = 0; index < lengthVector; index++){
            cin >> vectorNumber[index];
        }

        while(testCaseLeftRight-- > 0){
            int indexLeft, indexRight;

            cin >> indexLeft >> indexRight;

            indexLeft -= 1;
            indexRight -= 1;

            llInt sumFromLeftToRight = 0;
            for(int index = indexLeft; index <= indexRight; index++){
                sumFromLeftToRight += vectorNumber[index];
            }

            cout << sumFromLeftToRight << endl;
        }

        cout << endl;
    }
}