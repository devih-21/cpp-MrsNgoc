#include <iostream>
#include <vector>
#include <algorithm>

#define llInt long long int

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase-- > 0){
        llInt lengthVector, numberSearch;

        cin >> lengthVector >> numberSearch;

        vector <llInt> vectorNumber;
        vectorNumber.assign(lengthVector,0);

        int check = -1;

        for(int index = 0; index < lengthVector; index++){
            cin >> vectorNumber[index];
            
        }


        for(int index = 0; index < lengthVector; index++){
            if(vectorNumber[index] == numberSearch){
                check = index + 1 ;
                break;
            }
        }

        cout << check << endl;



        
    }
}