#include<iostream>

using namespace std;
 
int n;
int check[100] = { 0 };
int arrNum[100];
 
void xuat() {
    for (int i = 1; i <= n; i++)
        cout << arrNum[i];
    cout << " ";
}
 
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        if (!check[i]) {
            arrNum[k] = i; 
            check[i] = 1;
            if (k == n)
                xuat();
            else
                Try(k + 1);
            check[i] = 0;
        }
    }
}
 
int main() {

        cin >> n;
        Try(1);
        cout << endl;
}