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
        
        if(lengthArr % 2 == 0){
            for(int index = 0; index < lengthArr / 2; index++){
                if(index == lengthArr - index - 1){
                    cout << arrNumber[index] << " ";
                } else {
                    cout << arrNumber[lengthArr - index - 1] << " ";
                    cout << arrNumber[index] << " ";
                }
            }
        } else {
            for(int index = 0; index <= lengthArr / 2; index++){
                if(index == lengthArr - index - 1){
                    cout << arrNumber[index] << " ";
                } else {
                    cout << arrNumber[lengthArr - index - 1] << " ";
                    cout << arrNumber[index] << " ";
                }
            }
        }

        cout << endl;
    }
}
