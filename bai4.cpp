#include "iostream"
using namespace std;
int binarySearch(int *a,int n,int x){
    int l{},r{n-1},m{};
    while (l<=r){
        m=(l+r)/2;
        if (a[m]==x) return m;
        else if (a[m]>x) r=m-1;
        else l=m+1;
    }
    return -1;
}
signed main(){ 
    srand(time(NULL));
    int n;n=rand()%1000;int *a= new int[n];
    for(int i=0;i<n;i++) a[i] = rand()%1000;
    sort(a,a+n);
    for (int i=0;i<n;i++) cout<<a[i]<<" \n"[i==n-1];
    int x=rand()%1000;cout<<"Gia tri can tim x="<<x<<"\n";
    if (binarySearch(a,n,x)>0)cout<<"x tim duoc tim thay tai vi tri "<<binarySearch(a,n,x);
    else cout<<"x khong xuat hien";
}
