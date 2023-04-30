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
    int N,D,H;
    cin>>N>>D>>H;
    vector<int> d(N),h(N);
    vector<float> x(N),b(N);
    rep(i,N){
        cin>>d.at(i)>>h.at(i);
        //r.at(i)=(float)((H-h.at(i))/x.at(i));
        //b.at(i)=H-r.at(i)*X;
    }
    float ans;
    float i,s,t;
    float r;
    for(i=0.0;i<1000;i+=0.0009){
        r=(float)((H-i)/D);
        rep(j,N){
            if(r*(d.at(j))+i<=h.at(j)){
                break;
            }
            else if(j==N-1){
                cout<<i;
                return 0;
            }
        }
    }
    return 0;
}