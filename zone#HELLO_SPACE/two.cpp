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
    int b;
    cin>>b;
    vector<vector<int>> a(b,vector<int>(20));
    int ans=0;
    rep(i,20){
        rep(j,20){
            cin>>a.at(i).at(j);
        }
    }
    rep(i,a.size()){
        rep(j,a.size()){
            int f=1;
            Rep(k,2,a.at(i).at(j)-1){
                if(a.at(i).at(j)%k==0){
                    f=0;
                    break;
                }
            }
            if(f==1){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}