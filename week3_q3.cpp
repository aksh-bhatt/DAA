#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &i:a)cin>>i;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            cout<<"Duplicate found\n";
            return;
        }
    }
    cout<<"No duplicate found\n"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
