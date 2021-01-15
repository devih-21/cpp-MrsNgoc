#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int testCase ;
    cin >> testCase ;
    while(testCase-- > 0){
        int lengthArr;

        cin >> lengthArr;

        int arrNumber[lengthArr];

        for(int index = 0; index < lengthArr; index++){
            cin >> arrNumber[index];
        }

        sort(arrNumber, arrNumber + lengthArr);
        cout << arrNumber[lengthArr - 1] << endl;


    }
}

