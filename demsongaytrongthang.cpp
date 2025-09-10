#include   <iostream>
#include <iomanip>
using namespace std;
int main() {
int thang;
cout << "Nhap thang: ";
cin >> thang;
if (thang < 1 || thang > 12 ) {
    cout << "Thang khong hop le!" << endl;
} else if (thang == 2) { 
    int nam;
    cout << "Nhap nam: ";
    cin >> nam;
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        cout << "Thang 2 co 29 ngay." << endl;
    } else {
        cout << "Thang 2 co 28 ngay." << endl;
    }
} else {
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Thang " << thang << " co 31 ngay." << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "Thang " << thang << " co 30 ngay." << endl;
            break;
    }
}
}
