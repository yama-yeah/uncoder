#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    int i;
    for(i=0;i<n;i++){
        cin>>a.at(i);
    }
    for(i=0;i<n;i++){
        cin>>b.at(i);
    }
    int mx,mn;
    mx=*max_element(a.begin(),a.end());
    mn=*min_element(b.begin(),b.end());
    if(mn<mx){
        cout<<0<<endl;
        return 0;
    }
    cout<<mn-mx+1<<endl;
}