// chu y truong hop co 3 so


#include <iostream>
#include <cmath>
#include <algorithm>

#define llInt long long int

using namespace std;

int main(){
    int testCase;
    cin >> testCase;    
    while(testCase--){
        int length, x;
        cin >> length >> x;
        int numArr[length], check[length];

        for(int i = 0; i < length; i++){
            cin >> numArr[i];
            check[i] = abs( x - numArr[i] );
        }

        for(int i = 0; i < length ; i++){
            for(int j = length - 1; j > i; j--){
                if(check[j] < check[j - 1]){
                    swap(check[j - 1],check[j]);
                    swap(numArr[j - 1],numArr[j]);
                }
            }
        }
        for(int i = 0; i < length; i++){
            cout << numArr[i] << " ";
        }
        cout << endl;
    }
}