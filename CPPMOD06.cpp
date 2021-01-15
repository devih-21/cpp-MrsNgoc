
#include <iostream> 
#include <string>


#define llInt unsigned long long

using namespace std; 
  
llInt mod(string num, llInt a) { 
    llInt res = 0; 
    for (int i = 0; i < num.length(); i++) {
         res = (res*10 + (int)num[i] - '0') % a;
    }
    return res; 
} 

 int modulo(int a, int b, int n){
    long long x=1, y=a; 
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % n; 
        }
        y = (y*y) % n; 
        b /= 2;
    }
    return x % n;
}
int main() 
{ 
    int testCase;
    cin >> testCase;
    while(testCase--){
        string a;
        llInt b,m;

        cin >> a>> b >> m;
        llInt number2 = mod(a, m);
        llInt result = 1;
        


        cout << modulo(number2,b,m) << endl;
    }
} 