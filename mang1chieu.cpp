#include<iostream>
#include <random> // for rand() and srand()
using namespace std;    
int main() {
    /*1 khai bao mang mot chieu
    int M3[3]; //mang nguyen M co 3 phan tư
    //2 khai bao mang co gia tri khoi tao
    int M4[4] = {1, 2, 3, 4}; //mang nguyen M4 co 4 phan tu
    cout << M4[0] << endl; //in phan tu dau tien cua mang M4*/
    
    //khai bao mang duoc nhap tu ban phim
    /*int n;
    cout << "Nhap so phan tu cua mang: ";   
    cin >> n;
    int M[n]; //mang M co n phan tu
    for (int i =0; i < n; i++)  {
        cout << "Phan tu thu " << i + 1 << " la : ";
        cout << "M[" << i << "] = ";
        cin >> M[i]; //nhap tung phan tu cua mang
    }
    //in ra cac phan tu cua mang 
    for (int pt : M) {
        cout << pt << " "; //in tung phan tu cua mang
    }*/

    //khai báo mảng với các phần tử ngẫu nhiên
    random _device rd; // tạo nguồn ngẫu nhiên*
    mt19937 generator(rd()); // khởi tạo bộ sinh số ngẫu nhiên
    uniform_int_distribution<int> dis(1, 100); // phân phối ngẫu nhiên từ 1 đến 100
    int mang[20]; // khai báo mảng có 20 phần tử
  for (int i = 0; i < 20; i++) {
        mang[i] = dis(generator); // gán giá trị ngẫu nhiên cho từng phần tử
    }
    
    // in ra các phần tử của mảng
    cout << "Cac phan tu cua mang la: ";
    for (int i = 0; i < 20; i++) {
        cout << mang[i] << " "; // in từng phần tử của mảng
    }
    cout << endl;

    return 0;
}