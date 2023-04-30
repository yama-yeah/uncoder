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
void dfs(vector<string> &f,int i,int j){
    f.at(i).at(j)='.';
    rep(k,3){
        rep(l,3){
            try{
                if(i-1+k>=0&&i-1+k<f.size()&&j-1+l>=0&&j-1+l<f.at(0).size()){
                    if(f.at(i-1+k).at(j-1+l)=='W'){
                        dfs(f,i-1+k,j-1+l);
                    }
                }
            }
            catch(...){
                continue;
            }
        }
    }
}
int main()
{
    
    int n,m;
    cin>>n>>m;
    vector<string> f(n);
    rep(i,n){cin>>f.at(i);}
    int cnt=0;
    rep(i,n){
        rep(j,m){
            if(f.at(i).at(j)=='W'){
                dfs(f,i,j);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
