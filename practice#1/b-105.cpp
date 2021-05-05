#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0,c=0;
    cin>>n;
    for(int i=1;i<=n;i+=2){
        for(int j=1;j<=n;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==8){
            ans++;
        }
        c=0;
    }
    cout<<ans<<endl;
    return 0;
}