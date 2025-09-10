#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Nhap n: ";
    cin >> n;   
    int giaithua = 1;
    if (n < 0) {
        cout << "Khong co giai thua cua so am." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            giaithua *= i;
        }
        cout << "Giai thua cua " << n << " la: " << giaithua << endl;
    }
}