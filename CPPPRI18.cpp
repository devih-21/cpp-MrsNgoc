#include <iostream>
#include <cmath>

using namespace std;



int main(){
    long testCase;
    cin >> testCase;
    
    while(testCase--){
        long start, end,  a, b;
        cin >> start >> end >> a >>b;
        int count = 0;
        for(long index = start; index <= end;index++){
            if(index % a == 0 || index % b ==0){
                count++;
            }
        }
        cout << count << endl;
    }
}
