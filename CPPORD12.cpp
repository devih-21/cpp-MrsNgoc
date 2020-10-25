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


        vector <llInt> vectorNumber;
        vectorNumber.assign(lengthVector,0);
        vector <llInt> newVector;


        for(int index = 0; index < lengthVector; index++){
            cin >> vectorNumber[index];

            if(vectorNumber[index] > 0){
                newVector.push_back(vectorNumber[index]);
            }
            
        }

        if(newVector.size() == 0){
            cout  << 1 << endl;
        } else {
            sort(newVector.begin(), newVector.end());
            vector <llInt> mark;
            mark.assign(newVector[newVector.size() - 1] + 2,0);
            // cout << mark.size();

            for(int index = 0; index < newVector.size(); index++){
                mark[newVector[index]]++;
            }     

            for(int index = 1; index < mark.size(); index++){
                if(mark[index] == 0){
                    cout << index << endl;
                    break;
                }
            }
        }
        
    }
}