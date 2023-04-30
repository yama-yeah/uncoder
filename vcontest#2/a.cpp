#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int key,temp,ans=t;
    int i;
    cin>>temp;
    for(i=1;i<n;i++){
        cin>>key;
        if(temp+t>=key){
            ans+=key-temp;
        }
        else{
            ans+=t;
        }
        temp=key;
    }
    cout<<ans<<endl;
}
