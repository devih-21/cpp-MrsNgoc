#include <iostream>
#include <vector>

#define ull unsigned long long
#define module 1000000007
using namespace std;



int main(){
    int testCase;
    cin >> testCase;

    vector <ull> fiboVector;


    fiboVector.push_back(0);
    fiboVector.push_back(1);

    ull check = 1;
    while(check < 10000){
        fiboVector.push_back(fiboVector[fiboVector.size() - 1] + fiboVector[fiboVector.size() - 2]);
        check = fiboVector[fiboVector.size() - 1] + fiboVector[fiboVector.size() - 2];
    }

    fiboVector[1] = 99999999;


    while(testCase--){
        ull lengthArr;
        cin >> lengthArr;
        int arr[lengthArr];
        vector <int> result;
        for(int index = 0; index < lengthArr; index++){
            cin >> arr[index];
        }

        for(int index = 0; index < lengthArr; index++){
            for(int j = 0; j < fiboVector.size();j++){
                if(arr[index] == fiboVector[j]){
                    result.push_back(fiboVector[j]);
                }
            }
        }

        for(int index = 0; index < result.size(); index++){
            cout << result[index] << " ";
        }

        cout << endl;



}
}