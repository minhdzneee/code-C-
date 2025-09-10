#include <iostream>
#include <string>
using namespace std;

// Định nghĩa struct SinhVien
struct SinhVien {
    int tuoi;
    string ten;
    double gpa;
};

int main() {
 SinhVien sv;
    // Nhập thông tin sinh viên
    cout << "Nhap tuoi sinh vien: ";
    cin >> sv.tuoi;
    cin.ignore(); // Để bỏ qua ký tự newline còn lại trong bộ đệm
    cout << "Nhap ten sinh vien: ";
    getline(cin, sv.ten);
    cout << "Nhap GPA sinh vien: ";
    cin >> sv.gpa;

    // In thông tin sinh viên
    cout << "\nThong tin sinh vien:\n";
    cout << "Ten: " << sv.ten << endl;
    cout << "Tuoi: " << sv.tuoi << endl;
    cout << "GPA: " << sv.gpa << endl;

    return 0;
}