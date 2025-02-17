#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int &i:arr)cin>>i;
    int cnt=0;
    int key;
    cin>>key;
    map<int,int>mp;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int c=arr[i]-key;
        
   
        cnt+=mp[c];
        mp[arr[i]]++;
    }
    cout<<cnt<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
