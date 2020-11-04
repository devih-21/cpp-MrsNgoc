#include <iostream>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int n, m;
        cin >> n >> m;

        int arrNum[n][m];
        bool arrCheck[n][m];

        for(int i=0; i < n; i++){
            for(int j =0; j < m; j++){
                cin >> arrNum[i][j];

                if(arrNum[i][j] == 1){
                    arrCheck[i][j] = true;
                } else {
                    arrCheck[i][j] = false;
                }
            }
        }

        for(int i=0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arrNum[i][j] == 1 && arrCheck[i][j] == true){
                    for(int ii = 0; ii < m; ii++){
                        arrNum[i][ii] = 1;
                    }
                    for(int ii = 0; ii < n; ii++){
                        arrNum[ii][j] = 1;
                    }
                }
            }
        }
        for(int i=0; i < n; i++){
            for(int j =0; j < m; j++){
                cout << arrNum[i][j] << " ";
            }
            cout << endl;
        }
       
    }
}
