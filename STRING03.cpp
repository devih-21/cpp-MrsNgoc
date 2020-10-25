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

    str newName = "";

    stringstream startString(fullName);
    str elementString;

    while(startString >> elementString){
        vectorStringChildren.push_back(elementString);
    }

    for(int index = 0; index < vectorStringChildren.size() ; index++){
         vectorStringChildren[index][0] -= 32;

         if(index == vectorStringChildren.size() - 1){
             for(int indexStringChildren = 1; indexStringChildren < vectorStringChildren[index].length(); indexStringChildren++){
                 vectorStringChildren[index][indexStringChildren] -= 32;
             }
         }
    }

    for(int index = 0; index < vectorStringChildren.size() - 1 ; index++){
         newName += vectorStringChildren[index];
         if(index != (vectorStringChildren.size() - 2) ){
             newName += " ";
         }
    }

    newName += ", ";

    newName += vectorStringChildren[vectorStringChildren.size() - 1];
    cout << newName;
}