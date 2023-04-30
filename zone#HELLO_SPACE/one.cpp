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
    vector<string> ans;
    while(1){
        string s,t;
        cin>>s;
        if(s=="\\"){
            break;
        }
        rep(i,s.size()){
            int d=s.at(i)-'a';
            if(d>=13){
                d-=13;
                t+='a'+d;
            }
            else{
                t+=s.at(i)+13;
            }
        }
        ans.pb(t);
    }
    rep(i,ans.size()){cout<<ans.at(i)<<endl;}
    return 0;
}