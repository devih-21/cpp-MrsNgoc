#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int length;
        cin >> length;
        vector <int> numVec;
        numVec.assign(length, 0);
        for(int i = 0; i < length; i++){
            cin >> numVec[i];
        }
        sort(numVec.begin(), numVec.end());
        for(int i = 0; i < length - 1; i++){
            if(i % 2 != 0){
                swap(numVec[i], numVec[i+1]);
            }
        }

        for(int i = 0; i < length; i++){
            cout << numVec[i] << " ";
        }
        cout << endl;
    }
}