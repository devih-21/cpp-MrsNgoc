#include <iostream>
#include <vector>
#include <algorithm>

#define llInt long long int

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase-- > 0){
        int width, height;
        cin >> width >> height;
        vector <llInt> vectorNumber;

        vectorNumber.assign(width*height,0);

        for(int index = 0; index < width * height; index++){
            cin >> vectorNumber[index];
        }

        

        sort(vectorNumber.begin(), vectorNumber.end());
        for(int index = 0; index < width * height; index++){
            cout << vectorNumber[index] << " ";
        }
        cout << endl; 
    }
}