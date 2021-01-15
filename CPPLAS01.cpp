#include <iostream>

using namespace std;

int check(int number){
    int temp = 0;
    while(number > 0){
        temp += number % 10;
        number /= 10;
    }

    if(temp < 10){
        return temp;
    } else {
        return check(temp);
    }
    
}

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int number;
        cin >> number;
        int result = check(number);
        cout << result << endl;
    }
} 