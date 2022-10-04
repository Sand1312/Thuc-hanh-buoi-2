#include "iostream"
#include "cstdlib"
#include "time.h"
using namespace std;
void swap(int *a,int *b){
    *a+=*b;
    *b=*a-*b;
    *a-=*b;
}
void sap_xep(int *a,int length){
    for (int i=0;i<length;i++)
        for (int j=i+1;j<length;j++)
            if (a[i]<a[j]) swap(a+i,a+j);
}
int main (){
    int n,a[100005]{};
    cout<<"Nhap gia tri so n=";cin>>n;
    for (int i=0;i<n;i++){
        cout <<"nhap gia tri thu "<<i<<" = ";cin>>a[i];
    }
    cout << "mang truoc khi sap xep: ";
    for (int i=0;i<n;i++)  cout << a[i] <<",\n"[i==n-1];
    sap_xep(a,n);
    cout << "mang sau khi sap xep: ";
    for (int i=0;i<n;i++) cout << a[i] << ", "[i==n-1];
}
