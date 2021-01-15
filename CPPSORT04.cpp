#include <iostream>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int lengthA, lengthB;
        cin >> lengthA >> lengthB;
        int arrA[lengthA], arrB[lengthB];
        int check[100001];
        for(int i = 0; i < 100001; i++){
            check[i] = 0;
        }
        for(int i = 0; i < lengthA; i++){
            cin >> arrA[i];
            check[arrA[i]]++;
        }
        for(int i = 0; i < lengthB; i++){
            cin >> arrB[i];
            check[arrB[i]]++;
        }

        for(int i = 0; i < 100001; i++){
            if(check[i]){
                cout << i << " ";
            }
        }
        cout << endl;

        for(int i = 0; i < 100001; i++){
            if(check[i] == 2){
                cout << i << " ";
            }
        }

        cout << endl;
    }
}