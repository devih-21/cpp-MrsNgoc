
#include<bits/stdc++.h> 
using namespace std; 
const int MAX = 10000; 
vector<int> least_pf(MAX, 0); 

void leastPrimeFactor(int n) { 

    least_pf[1] = 1; 
    for (int i = 2; i <= n; i++) 
    { 
        if (least_pf[i] == 0) 
        { 

            least_pf[i] = i; 
            for (int j = 2*i; j <= n; j += i) 
                if (least_pf[j] == 0) 
                    least_pf[j] = i; 
        } 
    } 
} 

bool isSphenic(int n) { 

    set<int> s; 

    while (n > 1) 
    { 
        int lpf = least_pf[n]; 

        int init_size = s.size(); 
          s.insert(lpf); 
        if (s.size() == init_size || s.size() > 3) 
            return false; 
        n /= lpf; 
    } 
    return (s.size() == 3); 
} 
  
int main() 
{ 
    leastPrimeFactor(MAX); 
    long testCase;
    cin >> testCase;
    while(testCase-- > 0){
        int numberTest;
        cin >> numberTest;
        if(isSphenic(numberTest)){
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}