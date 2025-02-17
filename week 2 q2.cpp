#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int &i:arr)cin>>i;
    
    for(int i=0;i<n;i++){
        int l=0,r=n-1;
        while(r>=0){
            int sum=arr[l]+arr[r];
            
            if( arr[i]==sum){
                cout<<l<<' '<<r<<' '<<i<<endl;
                return ;
            }
            else{
                if(arr[i]>sum)l++;
                else
                r--;
            }
        }
    }
    cout<<"NO VALID INDEX FOUND\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
