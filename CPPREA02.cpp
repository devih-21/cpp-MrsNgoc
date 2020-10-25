#include <iostream>
#include <vector>

#define llInt long long int

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase-- > 0){
        int lengthOfVector;
        cin >> lengthOfVector;

        llInt newArr[lengthOfVector];

        vector <llInt> vectorNumber;
        vectorNumber.assign(lengthOfVector,0);

        for(int index = 0; index < lengthOfVector; index++){
            cin >> vectorNumber[index];
        }

        for(int index = 0; index < lengthOfVector; index++){
            if(vectorNumber[index] != 0){
                cout << vectorNumber[index] << " ";
            }
        }

        for(int index = 0; index < lengthOfVector; index++){
            if(vectorNumber[index] == 0){
                cout << vectorNumber[index] << " ";
            }
        }
        cout << endl;
    }
}