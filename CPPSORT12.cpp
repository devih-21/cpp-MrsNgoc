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

        long long arrNumberFirst[lengthArrFirst], arrNumberSecond[lengthArrSecond];

        for(int index = 0; index < lengthArrFirst; index++){
            cin >> arrNumberFirst[index];
        }

        for(int index1 = 0; index1 < lengthArrSecond; index1++){
            cin >> arrNumberSecond[index1];
        }

        sort(arrNumberFirst, arrNumberFirst + lengthArrFirst);
        sort(arrNumberSecond, arrNumberSecond + lengthArrSecond);

        long long result = arrNumberSecond[0] * arrNumberFirst[lengthArrFirst - 1];
        cout << result << endl;
    }
}
