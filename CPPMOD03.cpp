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
        lli sum = 0;

        if(n < k){
            sum = n*(n+1)/2;
        } else {
            lli tempNumber = (int) n / k;
            lli tempMod = n - k*tempNumber;

            sum = ((k-1)*k / 2)*tempNumber + tempMod*(tempMod + 1) / 2;

        }

        cout << sum << endl;
    }

}