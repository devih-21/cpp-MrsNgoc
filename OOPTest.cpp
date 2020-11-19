#include <iostream>
#include <string>

using namespace std;

class sinhVien{

    private:
        string hoTen;
        static int ID = 100;
        int diem;
    public:
        void nhap();
        void hienThi();
    
};

void sinhVien::nhap(){
    cout << "nhap ho ten sinh vien : ";
    getline(cin, hoTen);
    // cin.ignore();
    // cout <<  "nhap ID : ";
    // cin >> ID;
    
    cout <<  "nhap diem : ";
    cin >> diem;

}

void sinhVien::hienThi(){
    cout << "sinh vien " << hoTen << " ID " << ID << " co diem so la : " << diem;
    ID++;
}

int main(){
    sinhVien newSinhVien;
    newSinhVien.nhap();
    newSinhVien.hienThi();
}