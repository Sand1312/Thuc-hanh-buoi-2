#include "iostream"
int tong (int *a, int *b){
    return *a+*b;
}
int32_t main(){
    int n;std::cout<<"Nhap gia tri so n= ";
    std::cin>>n;
    int ans{};
    std::cout<<"Tong T=";
    for (int i=1;i<=n;i++) {
        std::cout<<i<<"+="[i==n];
        ans=tong(&ans,&i);
    }
    std::cout<<ans;
}
