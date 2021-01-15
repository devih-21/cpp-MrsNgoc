#include <iostream>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int num;
        cin >> num;

        int arrNum[num][num];

        for(int i=0; i < num; i++){
            for(int j =0; j < num; j++){
                cin >> arrNum[i][j];
            }
        }
        for(int i=0; i < num; i++){
            if(i % 2 == 0 ){
                for(int j = 0; j < num; j++){
                    cout << arrNum[i][j] << " ";
                }
            } else {
                for(int j = num - 1; j >= 0; j--){
                    cout << arrNum[i][j] << " ";
                }
            }
        }
        cout << endl;
        
        
    }
}
