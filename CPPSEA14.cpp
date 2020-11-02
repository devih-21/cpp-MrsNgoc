#include <bits/stdc++.h> 
using namespace std; 
int arrCheck[1000000]; 
int main() { 
    int testCase; 
    cin>>testCase; 
    while(testCase--) { 
        int n,a; 
        cin>>n; 
        memset(arrCheck,0,sizeof(arrCheck)); 
        bool check = false; 
        for(int i=0; i<n; i++) { 
            cin>>a; arrCheck[a]+=1; 
            if(arrCheck[a]>1 && check==false) { 
                cout<<a; 
                check=true; 
            }
        } 
            if(check == false) cout<<-1; 
            cout<<endl; 
    } 
}