#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll a,k;
    cin>>a>>k;
    ll t=0;
    while(a<2000000000000){
        t++;
        a+=1+k*a;
    }
    cout<<t<<endl;
}