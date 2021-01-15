#include <iostream>
#include <vector>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int length, k;
        cin >> length >> k;
        vector <int> numVec;
        numVec.assign(length, 0);
        int count = 0;
        for(int index = 0; index < length; index++){
            cin >> numVec[index];
            if(numVec[index] <= k){
                count++;
            }
        }
        int bad = 0;
        for(int i = 0; i < count; i++){
            if(numVec[i] > k){
                bad++;
            }
        }

        int res = bad;

        for(int i=0, j=count;j < length; i++,j++){
            if(numVec[i] > k) bad--;
            if(numVec[j] > k) bad++;
            res = min(res,bad);
        }



        cout << res << endl;

    }
}