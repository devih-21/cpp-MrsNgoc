#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int n, k;
        cin >> n >> k;
        vector <int> vecNum;
        vecNum.assign(n*n,0);
        for(int index = 0 ; index < n*n; index++){
            cin >> vecNum[index];
        }

        sort(vecNum.begin(), vecNum.end());

        cout << vecNum[k-1] << endl;
    }
}