#include <iostream>
using namespace std;

struct sv {
    int msv; // ma sinh vien
    char ten[30]; // ten sinh vien
    char tenlop[10]; // ten lop
    char ngaysinh[15]; // ngay sinh
    float diem; // diem trung binh

};
void nhap(sv &sv1){
    cout << "Nhap ma sinh vien: "; cin >> sv1.msv;
    cin.ignore();
    cout << "Nhap ten sinh vien: ";
    cin.getline(sv1.ten, 30);
    cout << "Nhap ten lop: "; cin.getline(sv1.tenlop, 10 );
    cout << "Nhap ngay sinh: "; cin.getline( sv1.ngaysinh, 15);
    cout << "Nhap diem trung binh: "; cin >> sv1.diem;

};
void xuat(sv &sv1){
    cout << "Ma sinh vien: " << sv1.msv << endl;
    cout << "Ten sinh vien: " << sv1.ten << endl;
    cout << "Ten lop: " << sv1.tenlop << endl;
    cout << "Ngay sinh: " << sv1.ngaysinh << endl;
    cout << "Diem trung binh: " << sv1.diem << endl;
};
int main (){
    sv sv1;
    nhap (sv1);
    xuat (sv1);
}