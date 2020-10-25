#include <iostream>
#include <vector>

#define module 1000000007
#define lli long long int

using namespace std;

int main(){

    int testCase ;
    cin >> testCase;
    while(testCase-- > 0){
        lli n, k;
        cin >> n >> k ;
        lli sum = k;
        lli sumCheck;
        if(n < k){
            sumCheck = n*(n+1)/2;
        } else {
            lli tempNumber = (int) n / k;
            lli tempMod = n - k*tempNumber;

            sumCheck = ((k-1)*k / 2)*tempNumber + tempMod*(tempMod + 1) / 2;

        }

        if(sum == sumCheck){
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

}