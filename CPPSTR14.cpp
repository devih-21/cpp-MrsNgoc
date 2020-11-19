#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while (testCase--){
        cin.ignore();
        string str;
        getline(cin, str);
        stringstream ss(str);
        string temp;
        int count = 0;
        while(ss >> temp){
            count++;
        }
        cout << count << endl;
    }
}