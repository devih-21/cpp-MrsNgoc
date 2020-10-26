#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#define str string

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        str stringMain, stringChildren;
    vector <str> vectorStringChildren;


    getline(cin, stringMain);
    getline(cin, stringChildren);

    stringstream startString(stringMain);
    str elementString;
    
    while(startString >> elementString){
        vectorStringChildren.push_back(elementString);
    }

    for(int index = 0; index < vectorStringChildren.size(); index++){
        if(vectorStringChildren[index] != stringChildren){
            cout << vectorStringChildren[index] << " ";
        }
    }
    
    
        cout << endl;
    }

}