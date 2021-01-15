#include <iostream>
#include <vector>

#define llInt long long int

using namespace std;

int main () {
    int testCase;
    cin >> testCase;

    while(testCase-- > 0){
        int lengthVector;
        cin >> lengthVector;

        vector <llInt> vectorNumber;
        vector <llInt> vectorCheck;

        vectorCheck.assign(lengthVector, -1);
        vectorNumber.assign(lengthVector, -1);

        for(int index = 0; index < lengthVector; index++){
            cin >> vectorNumber[index];
        }

        for(int indexVectorCheck = 0; indexVectorCheck < lengthVector; indexVectorCheck++){
            for(int indexVectorNumber = 0; indexVectorNumber < lengthVector; indexVectorNumber++){
                if(vectorNumber[indexVectorNumber] == indexVectorCheck){
                    vectorCheck[indexVectorCheck] = indexVectorCheck; 
                }
            }
        }

        for(int index = 0; index < lengthVector; index++){
            cout << vectorCheck[index] << " ";
        }

        cout << endl;
    }
}