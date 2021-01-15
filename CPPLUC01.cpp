#include <iostream>
#include <string>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        string number;
        cin >> number;
        int newNumber = (number[number.length() - 2] - '0') * 10 + (number[number.length() - 1] - '0');
        if(newNumber == 86 ){
            cout <<  1;
        } else {
            cout << 0;
        }

        cout << endl;
    }
}