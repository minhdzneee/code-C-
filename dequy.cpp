#include<iostream>
using namespace std;    

int giaithua(int n) {
    if (n == 0 || n == 1) return 1;
    return n * giaithua(n - 1);
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
     int result = giaithua(n);
    cout << "Giai thua cua " << n << " la: " << result << endl;
    return 0;
}