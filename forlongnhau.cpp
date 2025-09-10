#include <iostream>
using namespace std;
void test(double a, double b, string pheptinh) { 
    if (pheptinh == "+") {
        cout << "Tong = " << a + b << endl;
    } else if (pheptinh == "-") {
        cout << "Hieu = " << a - b << endl;
    } else if (pheptinh == "*") {
        cout << "Tich = " << a * b << endl;
    } else if (pheptinh == "/"  ) {
        if (b != 0) {
            cout << "Thuong = " << a / b << endl;
        } else {
            cout << "Khong the chia cho 0." << endl;
        }
    } else {
        cout << "Phep tinh khong hop le." << endl;
    }
   
    }
int main() {
double a,b;
string pheptinh;
cout << "Nhap phep tinh (+, -, *, /): ";
cout << "nhap a: ";
cin >> a;
cout << "nhap b: ";
cin >> b;
test(a, b, "pheptinh");
return 0;
    }
