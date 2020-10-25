#include <iostream>

using namespace std;



void lcmAndGcdTwoNum(long numberFirst, long numberSecond){
    if (numberFirst < numberSecond){
        long temp = numberFirst;
        numberFirst = numberSecond;
        numberSecond = temp;
    }

    long lcmTowNum = numberSecond * numberFirst;

    while(numberFirst != numberSecond){
        if(numberFirst > numberSecond){
            numberFirst -= numberSecond;
        } else {
            numberSecond -= numberFirst;
        }
        cout << numberFirst << endl;
    }

    cout << lcmTowNum / numberFirst << " "<< numberFirst << endl;
}
// runtime error because void function not long ??? 

int main(){
    int testCase;
    cin >> testCase;
    while (testCase-- > 0){
        long numberFirst, numberSecond;
        cin >> numberFirst >> numberSecond;
        lcmAndGcdTwoNum(numberFirst, numberSecond);
    }
}