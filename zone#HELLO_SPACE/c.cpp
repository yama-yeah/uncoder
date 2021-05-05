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
    int n;
    cin>>n;
    int m=5;
    vector<vector<int>> a(n,vector<int>(m));
    rep(i,n){
        rep(j,m){cin>>a.at(i).at(j);}
    }
    ll l=0,r=10000000000;
    while(l+1<r){
        vector<int> b;
        int ja=(l+r)/2;
        rep(i,n){
            int x=0;
            rep(j,m){
                if(a.at(i).at(j)>=ja){
                    x|=1<<j;
                }
            }
            b.pb(x);
        }
        sort(ALL(b));
        b.erase(unique(ALL(b)),b.end());
        bool f=false;
        rep(i,b.size()){
            rep(j,i+1){
                rep(k,j+1){
                    if((b.at(i)|b.at(j)|b.at(k))==(1<<m)-1){
                        f=true;
                    }
                }
            }
        }
        if(f){l=ja;}
        else{r=ja;}
    }
    cout<<l<<endl;
    return 0;
}