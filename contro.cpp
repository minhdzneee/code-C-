#include <iostream>
using namespace std;

int main() {
    int* mang[10];
    for (int i = 0; i < 10; i++) {
        mang[i] = new int;
    }
    for (int i = 0; i < 10; i++) {
        cout << mang[i] << " ";
        }
    for (int i = 0; i < 10; i++) {
        cin >> *mang[i];
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << *mang[i] << " ";
        }
    }
