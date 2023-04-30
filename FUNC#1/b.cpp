#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h,w,x,y;
    int i;
    cin>>h>>w>>y>>x;
    vector<string> fields(h);
    for(i=0;i<h;i++){
        cin>>fields.at(i);
    }
    int ans=0;
    //right
    
    for(i=x;i<w;i++){
        if(fields.at(y-1).at(i)=='.'){
            ans++;
        }
        else
            break;
    }
    //left
    if(x>1){
        for(i=x-2;i>-1;i--){
            if(fields.at(y-1).at(i)=='.')
                ans++;
            else
                break;
        }
    }
    //below
    for(i=y;i<h;i++){
        if(fields.at(i).at(x-1)=='.')
            ans++;
        else
            break;
    }
    //above
    if(y>1){
        for(i=y-2;i>-1;i--){
            if(fields.at(i).at(x-1)=='.'){
                ans++;
            }
            else
                break;
        }
    }
    cout<<ans+1<<endl;
    return 0;
} // namespace name