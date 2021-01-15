#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        string str;
        cin >> str;
        int k;
        cin >> k;
        vector <int> check;
        check.assign(200,0);
        for(int index = 0; index < str.length(); index++){
            check[(int) str[index]]++;
        }

        int count = 0;
        for(int index = 0; index < 200; index++){
            if(check[index]){
                count++;
            }
        }

        if(count + k >=26){
            cout << 1 << endl;
        } else {
            cout <<0 << endl;
        }

    }
}