#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int l,n,mn,mx;
    cin>>l>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin>>x.at(i);
    }
    mn=0;
    mx=0;
    for(int i=0;i<n;i++){
        mn=max(mn,min(x.at(i),l-x.at(i)));
        mx=max(mx,max(x.at(0),l-x.at(i)));
    }
    cout<<mn<<" "<<mx<<endl;
}