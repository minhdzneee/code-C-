#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    int a;
    cout << "Nhap so nguyen a: ";
    cin >> a;
    string ketqua = (a % 2 == 0) ? "la so chan" : "la so le";
    cout << "So " << a << " " << ketqua << "." << endl;
}