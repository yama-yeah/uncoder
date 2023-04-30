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
    string s,t="";
    int c=0;
    cin>>s;
    rep(i,s.size()){
        if(s.at(i)=='R'){
            c++;
        }
        else{
            if(c%2==1){
                reverse(ALL(t));
                c=0;
            }
            t+=s.at(i);
        }
    }
    if(c%2==1){
        reverse(ALL(t));
    }    
    ll i=0;
    while(1){
        try{
            if(t.at(i)==t.at(i+1)){
                t.erase(i,2);
                if(i!=0){i--;}
            }
            else{
                i++;
            }
        }
        catch(...){
            break;
        }
    }
    cout<<t;
    return 0;
}