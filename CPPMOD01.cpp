#include <iostream>
#include <vector>

#define ull unsigned long long
#define module 1000000007
using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase-- > 0){
        int number, exponential, divisor ;
        cin >> number >> exponential >> divisor;

        ull result = number;
        for(int index = 2; index <= exponential; index++){
            result = ((result % divisor) * number) % divisor;
        }      

        cout << result << endl;
    }
}