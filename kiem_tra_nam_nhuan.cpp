#include <iostream>
using namespace std;    
int main() {
    int nam;
    cout << "Nhap nam: ";
    cin >> nam;

    if (nam < 0) {
        cout << "Nam khong hop le!" << endl;
    } else {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            cout << "Nam " << nam << " la nam nhuan." << endl;
        } else {
            cout << "Nam " << nam << " khong phai la nam nhuan." << endl;
        }
    }
    return 0;
}