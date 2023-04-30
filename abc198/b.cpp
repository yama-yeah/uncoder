#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,temp="";
    cin>>str;
    for(int j=str.size()-1;j>-1;j--){
        if(str.at(j)=='0'){
            temp+='0';
        }
        else{
            str=temp+str;
            break;
        }
    }
    for(int i=0;i<str.size()/2;i++){
        if(str.at(i)==str.at(str.size()-i-1)){
            continue;
        }
        else{
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}