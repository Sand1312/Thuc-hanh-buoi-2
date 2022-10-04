#include<iostream>
using namespace std;
void nhap(int **a, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Nhap a[" << i << ", " << j << "] = ";
            cin >> a[i][j];
        }
    }
}
int tong_cheo(int **a,int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)  sum += a[i][i];
    return sum;
}
int main() {
    int n;
    cout << "Nhap vao so n: ";
    cin >> n;
    cout << "Khoi tao mang a: " << endl;
    int **a = new int*[n];
    for(int i = 0; i < n; i++)      a[i] = new int[n];
    nhap(a, n);
    cout << "Tong cac phan tu tren duong cheo chinh la: " << tong_cheo(a, n) << endl;
}
