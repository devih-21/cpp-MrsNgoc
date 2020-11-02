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

        for(int i = 0; i < num; i++){
            cout << arrNum[0][i] << " ";
        }

        cout << endl;

        for(int i = 1; i < num - 1; i++){
            for(int j = 0; j < num; j++){
                if(j == 0 || j == num - 1){
                    if(j == 0){
                        cout << arrNum[i][j] << " ";
                    } else {
                        cout << arrNum[i][j] << endl;
                    }
                } else {
                    cout << "  ";
                }
            }
        }

        for(int i = 0; i < num; i++){
            cout << arrNum[num-1][i] << " ";
        }
        cout << endl;
    }
}
