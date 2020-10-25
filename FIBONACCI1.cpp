#include <iostream>
#include <vector>

#define ull unsigned long long
#define module 1000000007
using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase-- > 0){
        int num;
        cin >> num;
        vector <ull> fiboVector;


        fiboVector.push_back(0);
        fiboVector.push_back(1);

        for(int index = 2; index <= num; index++){
            fiboVector.push_back( (fiboVector[index - 2] % module + fiboVector[index - 1] % module) % module);
        }      

        cout << fiboVector[num] << endl;
    }
}