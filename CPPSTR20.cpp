#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
        cin.ignore();
    while (testCase--){
        string str;
        getline(cin, str);
        stringstream ss(str);
        string temp;
        vector <string> newStr;
        while(ss >> temp){
            newStr.push_back(temp);
        }
        for(int index = newStr.size() - 1; index >= 0; index-- ){
            cout << newStr[index] << " ";
        }

        cout << endl;
    }
}