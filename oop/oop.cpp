#include <bits/stdc++.h>
using namespace std;

//class
/* 
thuoc tinh: attribute
phuong thuc: method, behavior
*/
//object

// - Encapsulation : đóng gói
// Access specifier: public, private, protected
// - Inheritance : kế thừa
// - Polymorphism : đa hình
// - Abstraction : trừu tượng

/*class tenclass{
 // thuoc tinh
 // phuong thuc
}; */

//constructor: hàm khởi tạo
//destructor: hàm hủy

class SinhVien {
    private:
        string id, ten, ns;
        double gpa;
    public:
        SinhVien(); //ham khoi tao
        ~SinhVien(); //ham huy
        SinhVien(string, string, string, double); //ham khoi tao co tham so
        void xinchao();
        void dihoc();
};
//Implementation
void SinhVien::xinchao() {
    cout << "Xin chao cac ban " << endl;
};
SinhVien::SinhVien() {
    cout <<"Ham khoi tao duoc goi" << endl;
};
SinhVien::SinhVien(string ma, string name, string birth, double diem) {
    cout << "Ham khoi tao co tham so duoc goi" << endl;
    id = ma;
    ten = name;
    ns = birth;
    gpa = diem;
};
int main() {
    SinhVien sv1("20233527", "Le Nguyen Nhat Minh", "21/06/2005", 2.8);
    sv1.xinchao();
    return 0;
}
  
