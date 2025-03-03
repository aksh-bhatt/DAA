#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int& x:v) cin>>x;
        int key;
        cin>>key;
        sort(v.begin(),v.end());
        bool flag = 0;
        int ansIdx1 = -1;
        int ansIdx2 = -1;
        for(int i=0;i<n;i++){
            int low = 0 , high = n-1;
            while(low<=high){
                int mid = low + (high - low)/2;
                if(v[i]+ v[mid]>key){
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            if(high>=0 && high<=n-1 && v[i]+v[high]==key){
                ansIdx1 = i;
                ansIdx2 = high;
                flag = 1;
                break;
            }
        }
        if(flag){
            cout<<v[ansIdx1]<<" "<<v[ansIdx2]<<endl;
        }
        else{
            cout<<"No Such Element Exist"<<endl;
        }
    }
}
