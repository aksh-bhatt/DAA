#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int num;
        cin>>num;
        bool flag = 0;
        int comparison = 0;
        for(int i=0;i<n;i++){
            comparison++;
            if(v[i]==num){
                flag = 1;
                break;
            }
        }
        if(flag) cout<<"Present "<<comparison<<endl;
        else cout<<"Not Present "<<comparison<<endl;
    }
    return 0;
}
