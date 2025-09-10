#include<iostream>
#include<cmath>
using namespace std;

struct toado{
    float x; // hoanh do
    float y; // tung do
};
//cau 1
int khoangcach(toado a, toado b){
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
};
int tinh_tong_do_dai(toado mang[], int max){
    int s = 0;
    for(int i = 0; i < max-1; i++){
        s += khoangcach(mang[i], mang[i+1]);
    }
    return s;
};
int nhap_mang(toado mang[], int max){
    int n;
    cout << "Nhap so luong diem (n < " << max << "): ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Nhap toa do diem thu " << i+1 << " (x y): ";
        cin >> mang[i].x >> mang[i].y;
    }
    return n;
};
int main(){
    toado A, B;
    cout << "Nhap toa do diem A (x y): ";
    cin >> A.x >> A.y;
    cout << "Nhap toa do diem B (x y): ";
    cin >> B.x >> B.y;
    cout << "Khoang cach giua 2 diem A va B la: " << khoangcach(A, B) << endl;
    //nhập vào 1 mảng các điểm, tính tổng độ dài các điểm đó
    const int Max = 100;
    toado mang[Max];
    nhap_mang(mang, Max);
    cout << "Tong do dai cac diem la: " << tinh_tong_do_dai(mang, Max) << endl;
    return 0;

}