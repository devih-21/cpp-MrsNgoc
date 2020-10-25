#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;

int main(){
    int testCase ;
    cin >> testCase ;
    while(testCase-- > 0){
        int lengthArrFirst, lengthArrSecond;

        cin >> lengthArrFirst >> lengthArrSecond;

        long long arrNumberFirst[lengthArrFirst + lengthArrSecond];

        for(int index = 0; index < lengthArrFirst + lengthArrSecond ; index++){
            cin >> arrNumberFirst[index];
        }

   
        sort(arrNumberFirst, arrNumberFirst + lengthArrFirst + lengthArrSecond);

        for(int index = 0; index < lengthArrFirst + lengthArrSecond ; index++){
            cout << arrNumberFirst[index] << " ";
        }
        cout << endl;
    }
}
