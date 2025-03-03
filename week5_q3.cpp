#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int &i:a)cin>>i;
    for(int &i:b)cin>>i;
    int i=0,j=0;
    vector<int>vec;
    while(i<n and j<m){
        if(a[i]==b[j]){
            vec.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else j++;
    }
    cout<<"Common elements in both the array are\n";
    for(int i:vec){
        cout<<i<<' ';
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}
