#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        string num;
        cin >> num;

        vector <char> vecString;
        for(int index = 0; index < num.length(); index++){
            vecString.push_back(num[index]);
        }

        for(int index = 0; index < num.length() - 1; index++){
            if( (int)(vecString[index] - '0') > (int)(vecString[index + 1] - '0') ){
                swap(vecString[index],vecString[index+1]);
                for(int index = 0; index < num.length(); index++){
                    cout << vecString[index];
                }
                break;
            }
            if(index == num.length() - 2 && (int)(vecString[index] - '0') <= (int)(vecString[index + 1] - '0') ){
                cout << "-1";
            }

        }

        

        cout << endl;



    }
}