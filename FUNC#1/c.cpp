
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int i,n;
    cin>>n;
    vector<ll> a(n);
    for(i=0;i<n;i++){
        cin>>a.at(i);
    }
    ll bit,ored,xored,ans=2147483647;
    ored=0;
    for(i=1;i< 1<<(n-1) ;i++){
        xored=0;
        for(int j=0;j<n;j++){
            ored|=a.at(j);
            if(i&(1<<j)||j==n-1){
                xored^=ored;
                ored=0;
            }
        }
        ans=min(ans,xored);
    }
    cout<<ans;
} // namespace name