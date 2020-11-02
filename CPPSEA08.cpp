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

        int count = 0;

        for(int index = 0; index < lengthVector; index++){
            if(findNumber == vectorNumber[index]){
                count++;
            }
        }

        if(count == 0){
            cout << -1 << endl;
        } else {
            cout << count << endl;
        }
    }
}