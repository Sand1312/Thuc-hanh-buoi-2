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
    srand( (unsigned) time(0));
    int *a = new int[1000];
    int n{1000};
    for (int i=0;i<n;i++) a[i]=(rand()%2601)-1000;
    cout<<"mang khi chua lam gi: ";
    for (int i=0;i<n;i++) cout<<a[i]<<",\n"[i==n-1];
    for (int i=0;i<n;i++) {
        if (a[i]<=0) {
            while (a[n-1]<=0&&n-1>i) n--;
            if (n-1>i) a[i]=a[n-1];
            n--;
        }
    }
    if (n==0) {
        cout <<"mang da bi xoa sach do toan so am";
        cout<<"nhap gia tri can chen x: ";
        int x{};cin>>x;
        cout <<"\nmang sau khi da chen them x: "<<x;
    }
    else {
        cout<<"mang sau khi xoa so am: ";
        for (int i=0;i<n;i++) cout<<a[i]<<",\n"[i==n-1];
        cout<<"mang sau khi sap xep: ";
        sap_xep(a,n);
        for (int i=0;i<n;i++) cout<<a[i]<<",\n"[i==n-1];
        cout<<"nhap gia tri can chen x: ";
        int x{};cin>>x;
        for (int j=n-1;j>=0;j--) {
            if (a[j]<=x) a[j+1]=a[j];
            else {
                a[j+1]=x;
                break;
            }
            if (a[j]<=x&&j==0) a[j]=x;
        }
        cout <<"mang sau khi da chen them x: ";
        for (int i=0;i<=n;i++) cout<<a[i]<<",\n"[i==n];
    }
}
