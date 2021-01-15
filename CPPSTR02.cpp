#include <iostream>
#include <string>
#include <typeinfo>        


using namespace std;

bool check(string str){
    long long int sum = 0;
    for(int index = 0; index < str.length(); index++){
        if(index % 2 == 0){
            sum += str[index] -'0';
        } else {
            sum -= str[index] -'0';
        }
    }



    if(sum % 11 != 0){
        return false;
    } else {
        return true;
    }
}

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        string numStr;
        cin >> numStr;

        cout << check(numStr) << endl;
    }
}