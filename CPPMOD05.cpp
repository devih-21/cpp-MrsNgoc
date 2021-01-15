
#include <iostream> 
#include <string>

#define llInt long long int

using namespace std; 
  
llInt mod(string num, llInt a) { 
    llInt res = 0; 
    for (int i = 0; i < num.length(); i++) {
         res = (res*10 + (int)num[i] - '0') % a;
    }
    return res; 
} 
int main() 
{ 
    int testCase;
    cin >> testCase;
    while(testCase--){
        string strNum;
        llInt number;
        cin >> strNum >> number;
        long long number2 = mod(strNum, number);
        cout << number2 << endl;
    }
}
