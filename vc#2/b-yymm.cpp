#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,o,t;
    int a,b;
    bool m1=false,m2=false;
    cin>>s;
    o=s.substr(0,2);
    t=s.substr(2);
    a=stoi(o);
    b=stoi(t);
    if(a<13){
        m1=true;
    }
    if(b<13){
        m2=true;
    }
    if(m2==true&&m1==true){
        cout<<"AMBIGUOUS";
    }
    else if(m1==true){
        cout<<"MMYY";
    }
    else if(m2==true){
        cout<<"YYMM";
    }
    else{
        cout<<"NA";
    }
    cout<<endl;
    return 0;
}