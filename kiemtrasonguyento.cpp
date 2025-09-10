#include   <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (n < 2) {
        cout << n << " khong phai la so nguyen to." << endl;
        return 0;
    } 
    else if (n == 2) {
        cout << n << " la so nguyen to." << endl;
        return 0;
    }
    else if (n == 3) {
        cout << n << " la so nguyen to." << endl;
        return 0;}
        else if (n == 5) {
        cout << n << " la so nguyen to." << endl;
        return 0;}
    else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) {
        cout << n << " khong phai la so nguyen to." << endl;
        return 0;}
    else { cout << n << " la so nguyen to." << endl;
    }
}