// trung so

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
        int countNumberAdd = 0;
        for(int index = 0; index < lengthArr - 1; ++index){
            if(arrNumber[index + 1] == arrNumber[index]){
                continue;
            } else {
                countNumberAdd += (arrNumber[index + 1] - arrNumber[index] - 1);

            }
        }


        cout << countNumberAdd<< endl;
    }
}
