#include <iostream>
#include <limits>
#include <cstring>
using namespace std;    
int main() {
   const int max = 10;
   char chuoi1[max];
   cout << "Nhap chuoi 1: ";
   cin.getline(chuoi1, max);
    cout << "Chuoi 1 vua nhap: " << chuoi1 << endl;
    cin.clear(); // Xoa trang thai loi neu co
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Xoa bo nho dem de nhap chuoi 2
    cout <<numeric_limits<streamsize>::max()<<endl;

   //
   char* chuoi2 = new char[max];
   cout << "Nhap chuoi 2: ";    
   cin.getline(chuoi2, max);
    cout << "Chuoi 2 vua nhap: " << chuoi2 << endl;
    char chuoi3[max];
    strncpy_s(chuoi3, size(chuoi3), chuoi2, 6);
    cout << "Chuoi 3 sau khi sao chep chuoi 2: " << chuoi3 << endl;


 
}