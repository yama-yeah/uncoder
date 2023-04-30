#include<bits/stdc++.h>
//#include <atcoder/all>
#define rep(i,n) for(long long int i=0;(i)<(long long int)(n);i++)
#define Rep(i,a,b) for(long long int i=(long long int)(a);(i)<(long long int)(b);i++)
#define REP(i,a,b,c) for(long long int i=(long long int)(a);(i)<(long long int)(b);i+=c)
#define repm(i,n) for(long long int i=n;(i)>-1;i--)
#define Repm(i,a,b) for(long long int i=a;(i)>b;i--)
#define REPM(i,a,b,c) for(long long int i=(long long int)(a);(i)>(long long int)(b);i-=c)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define fi first
#define se second
#define sz(x) ((int)x.size())
#define uni(a) erase(unique((a).begin(),(a).end()),(a).end())
#define bs(a,x) binary_search(a.begin(),a.end(),x)
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
    int a,b,c,x,cnt=0;
    cin>>a>>b>>c>>x;
    vector<int> cs;
    rep(i,c+1){
        int d=i*50;
        cs.pb(d);
    }
    rep(i,a+1)rep(j,b+1)if(bs(cs,x-i*500-j*100))cnt++;
    cout<<cnt<<endl;
    return 0;
}