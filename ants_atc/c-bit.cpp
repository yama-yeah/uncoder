#include<bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
#define overload4(a, b, c, d, e, ...) e
#define overload2(a,b,e,...) e
#define elif else if
#define vec(type,name,...) vector<type>name(__VA_ARGS__)
#define vv(type,name,h,...) vector<vector<type>>name(h,vector<type>(__VA_ARGS__))
#define vvv(type,name,h,w,...) vector<vector<vector<type>>>name(h,vector<vector<type>>(w,vector<type>(__VA_ARGS__)))
#define rep1(a)          for(long long int i = 0; i < a; i++)
#define rep2(i, a)       for(long long int i = 0; i < a; i++)
#define rep3(i, a, b)    for(long long int i = a; i < b; i++)
#define rep4(i, a, b, c) for(long long int i = a; i < b; i += c)
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define repm1(a)          for(long long int i = a; i > -1; i--)
#define repm2(i, a)       for(long long int i = a; i > -1; i--)
#define repm3(i, a, b)    for(long long int i = a; i > b; i--)
#define repm4(i, a, b, c) for(long long int i = a; i > b; i -= c)
#define repm(...) overload4(__VA_ARGS__, repm4, repm3, repm2, repm1)(__VA_ARGS__)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define fi first
#define se second
#define npos string::npos
#define sz(x) ((int)x.size())
#define cp(x,y,a,b) copy(x.begin()+a,x.begin()+b,y)
#define ctoi(x) (int)((x)-'0')
#define mxe(a) *max_element(ALL(a))
#define mne(a) *min_element(ALL(a))
#define bs(a,x) binary_search(a.begin(),a.end(),(auto)x)
#define uni(a) (a).erase(unique((a).begin(),(a).end()),(a).end())
#define rv(a) reverse((a).begin(),(a).end());
#define sort1(a) sort((a).begin(),(a).end())
#define sort2(a,b) sort((a).begin(),(a).end(),greater<int>())
#define sort(...) overload2(__VA_ARGS__,sort2,sort1)(__VA_ARGS__)
#define endl "\n"
#define Input(type,...) type __VA_ARGS__; input(__VA_ARGS__)
#define scanv(a) rep(sz(a)){cin>>a.at(i);}
#define scanvv(a) rep(sz(a))rep(j,sz((a).at(i))){cin>>a.at(i).at(j);}
#define outv(a) rep(sz(a)){cout<<a.at(i)<<" ";}cout<<endl
#define outvv(a) rep(sz(a)){rep(j,sz((a).at(i))){cout<<a.at(i).at(j)<<" ";}cout<<endl;}
template<class... T>void input(T&... a){(cin >> ... >> a);}
template<class T, class... Ts>void print(const T& a, const Ts&... b){cout << a;(cout << ... << (cout << ' ', b));cout << '\n';}
template<class... T>constexpr auto min(T&... a){return min(initializer_list<common_type_t<T...>>{a...});}
template<class... T>constexpr auto max(T&... a){return max(initializer_list<common_type_t<T...>>{a...});}
#define INF 1e9
typedef long long ll;
typedef long double ld;
int main()
{
    Input(string,s);
    ll sum=0;
    rep(i,1<<(sz(s)-1)){
        ll c=0;
        rep(j,sz(s)){
            c*=10;
            c+=ctoi(s.at(j));
            if(i&1<<j){
                sum+=c;
                c=0;
            }
        }
        sum+=c;
    }
    print(sum);
    return 0;
}