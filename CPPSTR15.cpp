#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        string stringInput;
        cin >> stringInput;
        cin.ignore();

        string subSring;
        int lengthSubString=1;
        int result = 0;
        while(lengthSubString <= stringInput.length()){
            for(int index = 0; index <= stringInput.length() - lengthSubString; index++){
                if(stringInput[index] == stringInput[index + lengthSubString - 1]){
                    result++;
                }
                // cout << "checkIndex " << index << " " << index + lengthSubString - 1 << endl;
            }
            lengthSubString++;
        }

        cout << result << endl;
        
    }
}