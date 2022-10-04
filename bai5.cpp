#include "iostream"
using namespace std;
signed main(){
    bool isPrime[1001]{};
    fill(isPrime+2,isPrime+1000,1);
    for (int i=2;i*i<=1000;i++)
        if (isPrime[i])
            for (int j=i*i;j<=1000;j+=i) isPrime[j]=0;
    for (int i=0;i<=1000;i++) if (isPrime[i]) cout<<i<<" \n"[i==1000];
}
