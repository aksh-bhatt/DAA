#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &i:a)cin>>i;
    int compare=0,shifts=0;

    for(int i=0;i<n-1;i++)
    {
        int j=i;
        int key=a[i];
        for(int k=i+1;k<n;k++){
            compare++;
            if(a[k]<key){
                key=a[j];
                j=k;
            }
        }
        shifts++;
        swap(a[i],a[j]);
    }
    for(int i:a)cout<<i<<' ';
    cout<<endl;
    cout<<"Compare is: "<<' '<<compare<<endl;
    cout<<"Total Shifts is: "<<shifts<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
