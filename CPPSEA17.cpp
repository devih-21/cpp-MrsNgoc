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


        
        sort(vectorNumber.begin(), vectorNumber.end());
        cout << vectorNumber[findNumber - 1];
        cout << endl;
    }
}