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
    string s;
    string z="ZONe";
    cin>>s;
    int cnt=0;
    int ans=0;
    rep(i,12){
        if(s.at(i)==z.at(cnt)){
            if(cnt==3){
                ans++;
                cnt=0;
            }
            else{
                cnt++;
            }T
        }
        else if(s.at(i)=='Z'){
            cnt=1;
        }
        else{
            cnt=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}