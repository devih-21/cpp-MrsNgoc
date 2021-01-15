#include <iostream>

#define llInt long long int

using namespace std;

class phanSoOOP{
    private:
        llInt tu1, mau1, tu2,mau2;
    public:
        void input();
        void sum();
        void output();
        int ulcn(int a, int b);
};
void phanSoOOP::input(){
    cin >> tu1;
    do{
        cin >> mau1;
    }while(mau1 == 0);
    cin >> tu2;
    do{
        cin >> mau2;
    }while(mau2 == 0);
}


void phanSoOOP::sum(){
    llInt quyDong = mau1 * mau2;
    tu1 *= mau2;
    tu2 *= mau1;
    cout << (tu1 + tu2) << "/" << quyDong;    
}

int main(){
    phanSoOOP newPhanSo;
    newPhanSo.input();
    newPhanSo.sum();
}