#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int q,t,f,i,cnt=0;
    string c;
    cin>>s;
    cin>>q;
    for(i=0;i<q;i++){
        cin>>t;
        if(t==1){
            cnt++;
        }
        else{
            if(cnt%2==1){
                reverse(s.begin(),s.end());
                cnt=0;
            }
            cin>>f;
            cin>>c;
            if(f==1){
                s.insert(0,c);
            }
            else{
                s.push_back(c.at(0));
            }
        }
    }
    if(cnt%2==1){
        reverse(s.begin(),s.end());
        cnt=0;
    }
    cout<<s<<endl;
}