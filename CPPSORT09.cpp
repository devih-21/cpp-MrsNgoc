#include <iostream>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase-- > 0){
        int lengthArr, sumTwoNum;
        cin >> lengthArr >> sumTwoNum;
        int arrNumber[lengthArr];
        for (int index = 0; index < lengthArr; ++index){
            cin >> arrNumber[index];
        }
        int countCouple = 0;
        for (int index = 0; index < lengthArr - 1; ++index){
            for (int indexSecond = index + 1; indexSecond < lengthArr; ++indexSecond){
                if(arrNumber[index] == (sumTwoNum - arrNumber[indexSecond]) ){
                    countCouple++;
                    // cout << arrNumber[index] << " ";
                }    
            }  
        }
        cout << countCouple << endl;
    }
}