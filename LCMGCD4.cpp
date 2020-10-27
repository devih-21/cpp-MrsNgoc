
#include <iostream> 
#include <string>

#define llInt long long int

using namespace std; 
  
int mod(string num, long a) 
{ 
    int res = 0; 
  
    // One by one process all digits of 'num' 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
} 

int gcm(llInt a, llInt b){
    while(a * b != 0){
        if(a > b){
            a %= b;
        } else {
            b%=a;
        }
    }

    return a+b;
}
  

// Driver program 
int main() 
{ 
    int testCase;
    cin >> testCase;
    while(testCase--){
        long number;
        cin >> number;
        cin.ignore();
        string strNum;
        getline(cin, strNum);
        long long number2 = mod(strNum, number);
        cout << number2;
        // cout <<gcm(number,number2)<< endl;
    }
} 