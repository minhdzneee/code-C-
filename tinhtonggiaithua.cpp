#include <iostream>
using namespace std;    
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int gt =1;
    long long tong = 0; // Khởi tạo biến tổng   
    for (int i = 1; i <=n; i++) {
        gt *= i; // Tính giai thừa của i
        tong += gt; // Cộng giai thừa vào tổng
    }
    cout << "Tong giai thua tu 1 den " << n << " la: " << tong << endl;
}