#include <iostream>
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

        sort(vectorNumber.begin(), vectorNumber.end());

        if(vectorNumber[0] == vectorNumber[1]){
            cout << -1 << endl;
        } else {
            cout << vectorNumber[0] << " " << vectorNumber[1] << endl;
        }
    }
}