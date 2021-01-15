#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int testCase ;
    cin >> testCase ;
    while(testCase-- > 0){
        int lengthArr, minK;

        cin >> lengthArr >> minK;

        int arrNumber[lengthArr];

        for(int index = 0; index < lengthArr; index++){
            cin >> arrNumber[index];
        }

        sort(arrNumber, arrNumber + lengthArr);
        cout << arrNumber[minK - 1] << endl;


    }
}