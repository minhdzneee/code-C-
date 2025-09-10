// bài tập về struct
/* Cấu trúc sinh viên 
Mã sinh viên
Tên sinh viên
Tên lớp 
Ngày sinh 
Điểm GPA là số thực hệ 4.
Xây dựng chương tình thực hiện các yêu cầu sau 
1. Thêm mới 1 sinh viên vào danh sách
2. Hiển thị thông tin sinh viên vừa nhập
3. Tìm kiếm sinh viên theo mã sinh viên (tên, lớp), hiển thị các sinh viên có mã đúng với mã cần tìm hoặc chứa mã cần tìm
4. Liệt kê các sinh viên có điểm GPA cao nhất
5. Liệt kê các sinh viên có GPA >= 2,6 theo thứ tự điểm giảm dần
6. Sắp xếp sinh viên theo tên
7. Sắp xếp sinh viên theo lớp, các sinh viên cùng lớp sẽ xếp theo thứ tự tên tăng dần theo thứ tự từ điển, chú ý sắp xếp tên trước sau đó đến họ và tên đệm
8. Sắp xếp sinh viên theo lớp, các sinh viên cùng lớp xếp theo thứ tự điểm gpa giảm dần 
*/
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
    nhap (sv1); //1.
    cin endl;
    xuat (sv1); //2.

}