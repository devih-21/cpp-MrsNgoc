#include <iostream>
#include <vector>
#include <cmath>

#define module 1000000007
#define llInt long long int

using namespace std;

int gcd(llInt a, llInt b){
    while(a * b != 0){
        if(a > b){
            a %= b;
        } else {
            b%=a;
        }
    }

    return a+b;
}

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        llInt x,y,z,n;
        cin >> x >> y >> z >> n;
        llInt gcdThreeNumber = (((x * y)/gcd(x,y))*z) / (gcd(z,((x * y)/gcd(x,y))));
        // cout << gcdThreeNumber;
        llInt min = pow(10,n-1);
        llInt max = pow(10,n) - 1;

        llInt temp1 = min/gcdThreeNumber;
        if(temp1 * gcdThreeNumber >= min){
            if(temp1 * gcdThreeNumber <= max){
                cout << temp1 * gcdThreeNumber << endl; 
            } else {
                cout << -1 << endl;
            }
        } else {
            temp1++;
            if(temp1 * gcdThreeNumber <= max){
                cout << temp1 * gcdThreeNumber << endl; 
            } else {
                cout << -1 << endl;
            }
        }

    }
        
    }
           
