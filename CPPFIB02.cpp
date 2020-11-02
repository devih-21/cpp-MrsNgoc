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
    while(check < 9000000000000000000){
        fiboVector.push_back(fiboVector[fiboVector.size() - 1] + fiboVector[fiboVector.size() - 2]);
        check = fiboVector[fiboVector.size() - 1] + fiboVector[fiboVector.size() - 2];
    }


    while(testCase--){
        ull num;
        cin >> num;
        int checkNum = 0;

        for(int index =0; index < fiboVector.size(); index++){
            if(num == fiboVector[index]){
                checkNum++;
                break;
            }
        }

        if(checkNum == 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}