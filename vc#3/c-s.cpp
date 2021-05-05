#include<bits/stdc++.h>
//#include <atcoder/all>
#define rep(i,n) for(long long int i=0;(i)<(long long int)(n);i++)
#define Rep(i,a,b) for(long long int i=(long long int)(a);(i)<=(long long int)(b);i++)
#define REP(i,a,b,c) for(long long int i=(long long int)(a);(i)<=(long long int)(b);i+=c)
#define repm(i,n) for(long long int i=n;(i)>=0;i--)
#define Repm(i,a,b) for(long long int i=a;(i)>=b;i--)
#define REPM(i,a,b,c) for(long long int i=(long long int)(a);(i)>=(long long int)(b);i-=c)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define fi first
#define se second
#define sz(x) ((int)x.size())
typedef long long ll;
typedef long double ld;
using namespace std;
int main()
{
    int n,m;
    int k;
    cin>>n>>m;
    vector<int> a(m),p(m);
    rep(i,m){
        cin>>k;
        rep(j,k){
            int key;
            cin>>key;
            a.at(i)+=1<<(key-1);
        }
    }
    int ans=0;
    rep(i,m){cin>>p.at(i);}
    rep(i,1<<n){
        bool f=true;
        rep(j,m){
            int cnt=0;
            rep(k,n){
                if(1&a.at(j)>>k&&1&i>>k){
                    cnt++;
                }
            }
            if(cnt%2!=p.at(j)){
                f=false;
                break;
            }
        }
        if(f){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}