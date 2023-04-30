#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k,h;
    int ans,c=0;
    cin>>a>>b>>k;
    h=min(a,b);
    for(int i=h;i>0;i--){
        if(a%i==0&&b%i==0){
            c++;
            if(c==k){
                ans=i;
            }
        }
    }
    cout<<ans<<endl;
}