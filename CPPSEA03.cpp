#include <iostream>

#define llInt long long int


using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int number,a;
        llInt sumTest = 0, sumList;
        cin>>number;
        sumList = number*(number+1)/2;
        for(int index = 1; index < number; index++){
            cin >> a;

            sumTest += a;
        }
        cout << sumList - sumTest << endl;

    }
}#include <iostream>

#define llInt long long int


using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int number,a;
        llInt sumTest = 0, sumList;
        cin>>number;
        sumList = number*(number+1)/2;
        for(int index = 1; index < number; index++){
            cin >> a;

            sumTest += a;
        }
        cout << sumList - sumTest << endl;

    }
}