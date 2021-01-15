#include <iostream>
#include <string>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        string stringInput;
        cin >> stringInput;
        cin.ignore();
        string result = "";
        for(char index = 'A'; index <= 'Z'; index++){
            int check = 0;
            for(int i = 0; i < stringInput.length(); i++){
                if(stringInput[i] == index){
                    check++;
                }
            }
            if(check == 1){
                result += index;
            }
        }
        for(int index = 0; index < stringInput.length(); index++){
            for(int i = 0; i < result.length(); i++){
                if(result[i] == stringInput[index]){
                    cout << stringInput[index];
                }
            }
        }
        cout << endl;
    }
}