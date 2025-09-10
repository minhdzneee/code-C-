#include <iostream>
using namespace std;    
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int count = 0;    // đếm số chẵn đã xét
    int even = 2;     // bắt đầu từ số chẵn nhỏ nhất
    long long sum = 0;

    while (count < n) {
        // kiểm tra số chẵn có đuôi 0 hay không
        if (even % 10 != 0) {
            sum += even;
        }
        even += 2; // sang số chẵn tiếp theo
        count++;
    }

    cout << "Tong = " << sum << endl;
    return 0;
}