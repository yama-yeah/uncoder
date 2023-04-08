#include<bits/stdc++.h>
//#include <atcoder/all>
using namespace std;
#define overload6(a, b, c, d,e, f,g, ...) g
#define overload5(a, b, c, d,e, f, ...) f
#define overload4(a, b, c, d, e, ...) e
#define overload3(a,b,c,d,...) d
#define overload2(a,b,c,...) c
#define elif else if
#define vec1(type) vector<type>
#define vec2(type,name) vector<type>name
#define vec3(type,name,...) vector<type>name(__VA_ARGS__)
#define vec(...) overload4(__VA_ARGS__,vec3, vec3, vec2, vec1)(__VA_ARGS__)
#define vv4(type,name,h,...) vector<vector<type>>name(h,vector<type>(__VA_ARGS__))
#define vv3(type,name,h) vector<vector<type>>name(h)
#define vv2(type,name) vector<vector<type>>name
#define vv1(type) vector<vector<type>>
#define vv(...) overload5(__VA_ARGS__,vv4, vv4, vv3, vv2,vv1)(__VA_ARGS__)
#define vvv5(type,name,h,w,...) vector<vector<vector<type>>>name(h,vector<vector<type>>(w,vector<type>(__VA_ARGS__)))
#define vvv4(type,name,h,w) vector<vector<vector<type>>>name(h,vector<vector<type>>(w))
#define vvv3(type,name,h) vector<vector<vector<type>>>name(h)
#define vvv2(type,name) vector<vector<vector<type>>>name
#define vvv1(type,name) vector<vector<vector<type>>>
#define vvv(...) overload6(__VA_ARGS__,vvv5, vvv5, vvv4, vvv3,vvv2,vvv1)(__VA_ARGS__)
#define rep1(a)          for(a)
#define rep2(i, a)       for(long long int i = 0; i < a; i++)
#define rep3(i, a, b)    for(long long int i = a; i < b; i++)
#define rep4(i, a, b, c) for(long long int i = a; i < b; i += c)
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define repv(name,n) vec(typeof(n),name);rep(i,n) name.pb(i)
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
#define cp(x,y,a,b) copy(x.begin()+a,x.begin()+b,back_inserter(y))
#define np(x) next_permutation(ALL(x))
#define ctoi(x) (int)((x)-'0')
#define mxe(a) *max_element(ALL(a))
#define mne(a) *min_element(ALL(a))
#define bs(a,x) binary_search(a.begin(),a.end(),(auto)x)
#define uni(a) (a).erase(unique((a).begin(),(a).end()),(a).end())
#define rv(a) reverse((a).begin(),(a).end())
#define sort1(a) sort((a).begin(),(a).end())
#define sort2(a,n) sort(a.begin(),a.end(),[](const typeof(a[0]) &alpha,const typeof(a[0]) &beta){return alpha[n] < beta[n];});
#define sort(...) overload2(__VA_ARGS__,sort2,sort1)(__VA_ARGS__)
#define rsort1(a,b) sort((a).begin(),(a).end(),greater<int>())
#define rsort2(a,n) sort(a.begin(),a.end(),[](const typeof(a[0]) &alpha,const typeof(a[0]) &beta){return alpha[n] > beta[n];});
#define rsort(...) overload2(__VA_ARGS__,rsort2,rsort1)(__VA_ARGS__)
#define endl "\n"
#define Input(type,...) type __VA_ARGS__; input(__VA_ARGS__)
#define scanv(a) rep(i,sz(a)){cin>>a.at(i);}
#define scanvv(a) rep(i,sz(a))rep(j,sz((a).at(i))){cin>>a.at(i).at(j);}
#define Scanv(type,a,...) vec(type,a,__VA_ARGS__);scanv(a)
#define Scanvv(type,a,h,...) vv(type,a,h,__VA_ARGS__);scanvv(a)
#define outv(a) rep(i,sz(a)){cout<<a.at(i)<<" ";}cout<<endl
#define outvv(a) rep(i,sz(a)){rep(j,sz((a).at(i))){cout<<a.at(i).at(j)<<" ";}cout<<endl;}
template<class... T>void input(T&... a){(cin >> ... >> a);}
template<class T, class... Ts>void print(const T& a, const Ts&... b){cout << a;(cout << ... << (cout << ' ', b));cout << '\n';}
template<class T, class... Ts>void print15(const T& a, const Ts&... b){cout << setprecision(15) << a;(cout << ... << (cout << ' ', b));cout << '\n';}
template<class... T>constexpr auto min(T&... a){return min(initializer_list<common_type_t<T...>>{a...});}
template<class... T>constexpr auto max(T&... a){return max(initializer_list<common_type_t<T...>>{a...});}
template<class T,class T2>void npn(T &a,T2 &b){do {b.pb(a);} while(next_permutation(ALL(a)));}//make_permutations_list
template<class T,class T2>void npk(T &a,T2 &b,int k){T2 c,d;nck(a,c,k);rep(typeof(c.at(0))& i:c){npn(i,d);rep(typeof(d.at(0))& j:d){b.pb(j);}}}
template<class T,class T2>void nck(T a,T2& b,int k){vec(int,indices,k);int s_i=0;int s=0;while(s>=0){rep(i,s_i,sz(a)){indices[s++]=i;if(s==k){T comb;rep(x,k){comb.pb(a[indices[x]]);}b.pb(comb);break;}}--s;if(s<0)break;s_i=indices[s]+1;}}
int counts(string &s,string t){int c=0,l=sz(s),tl=sz(t),r=0;rep(i,l){if(s[i]==t[c]){c++;}else{c=0;}if(c==tl){r++;c=0;}}return r;}
#define Max(a,...) a=max(a,__VA_ARGS__)
#define Min(a,...) a=max(a,__VA_ARGS__)
#define Npn(a,name) vec(typeof(a),name); npn(a,name)
#define Npk(a,name,k) vec(typeof(a),name); npk(a,name,k)
#define Nck(a,name,k) vec(typeof(a),name); nck(a,name,k)
#define INF 1e9
typedef long long ll;
//ll max value 	9223372036854775807
typedef long double ld;
void solve()
{
    int def='a'-'A';
    Input(string,s);
    int l=sz(s);
    rep(i,l){
        if(s[i]>='a'){
            s[i]-=def;
        }
    }
    print(s);
}
int main()
{
    //solve();
    return 0;
}