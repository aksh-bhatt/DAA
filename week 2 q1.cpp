#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int &i:arr)cin>>i;
    int key;
    cin>>key;
    auto c=upper_bound(arr.begin(),arr.end(),key-1)-arr.begin();
    auto d=upper_bound(arr.begin(),arr.end(),key)-arr.begin();
    if(c==d){
        cout<<"Element not found\n"<<endl;
        return;
    }
    cout<<d-c<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
