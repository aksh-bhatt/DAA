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
        int key;
        cin>>key;
        int idx = -1;
        int flag = 0;
        int from = 0;
        int x = 0;
        while((1<<x)-1 < n && v[(1<<x)-1]<key){
            from = x;
            x++;
        }
        for(int i=(1<<from)-1;i<=(1<<x)-1;i++){
            if(key==v[i]){
                idx = i;
                flag = 1;
                break;
            }
        }
        if(flag) cout<<"Present at index "<<idx<<endl;
        else cout<<"Not Present"<<endl;
    }
    return 0;
}
