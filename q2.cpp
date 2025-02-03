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
        int flag = 0;
        int low = 0;
        int high = n-1;
        int comparison = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            comparison ++;
            if(num==v[mid]){
                flag = 1;
                break;
            }
            else if(num>v[mid]){
                low = mid + 1;
            }
            else high = mid -1 ;
        }
        if(flag) cout<<"Present "<<comparison<<endl;
        else cout<<"Not Present "<<comparison<<endl;
    }
    return 0;
}
