#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,i,sum=0,j=0,ans=9223372036854775807,m;
    cin>>n;
    vector<ll> sum1(n),sum2(n),key(n);
    for(i=0;i<n;i++){
        cin>>key.at(i);
        sum+=key.at(i);
        sum1.at(i)=sum;
    }
    sum=0;
    for(i=n-2;i>0;i--){
        sum+=key.at(i);
        m=min(sum1.at(j)-sum,ans);
        j++;
    }
    cout<<m<<endl;
    return 0;
}
