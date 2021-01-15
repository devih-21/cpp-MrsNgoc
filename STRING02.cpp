#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#define str string

using namespace std;

int main(){
    str fullName;
    vector <str> vectorStringChildren;
    str newEmail = "";
    getline(cin, fullName);

    for(int index = 0; index < fullName.length(); index++){
        if(fullName[index] >= 'A' && fullName[index] <= 'Z'){
            fullName[index] += 32;
        }
    }

    stringstream startString(fullName);
    str elementString;

    while(startString >> elementString){
        vectorStringChildren.push_back(elementString);
    }
    newEmail += vectorStringChildren[vectorStringChildren.size() - 1];

    for(int index = 0; index < vectorStringChildren.size() - 1; index++){
        newEmail += vectorStringChildren[index][0];
    }

    newEmail += "@ptit.edu.vn";
    cout << newEmail;





}

