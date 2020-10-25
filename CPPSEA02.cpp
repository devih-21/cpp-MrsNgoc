#include <iostream>
#include <vector>
#include <algorithm>

#define llInt long long int

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase-- > 0){
        llInt lengthVector;

        cin >> lengthVector;

        lengthVector -= 1;

        vector <llInt> vectorNumber;
        vectorNumber.assign(lengthVector,0);


        for(int index = 0; index < lengthVector; index++){
            cin >> vectorNumber[index];
            
        }


        sort(vectorNumber.begin(), vectorNumber.end());

        for(int index = 1; index < lengthVector; index++){
            if(vectorNumber[index - 1] != vectorNumber[index] - 1){
                cout << (vectorNumber[index - 1] - 1) << endl;
            }
            
        }



        
    }
}