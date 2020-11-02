#include <iostream>
#include <vector>
#include <algorithm>

#define llInt long long int

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        vector <llInt> vectorNumber;
        llInt lengthVector, findNumber;
        cin >> lengthVector >> findNumber;
        vectorNumber.assign(lengthVector, 0);
        for(int index = 0; index < lengthVector; index++){
            cin >> vectorNumber[index];
        }


        for(int index = 0; index < lengthVector; index++){
            if(findNumber == vectorNumber[index]){
                cout << index +1 ;
            }
        }

        cout << endl;
    }
}