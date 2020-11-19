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
        int length;
        cin >> length;
        int a[length];

        for(int i = 0; i < length; i++){
            cin >> a[i];
        }

        for(int i = 0; i < length; i++){
            if(a[i] > a[i+1]){
                cout << i + 1 << " ";
                break;
            }
        }
        for(int i = length - 1; i >= 0; i--){
            if(a[i] < a[i-1]){
                cout << i - 1 << endl;
                break;
            }
        }
    
    }
}