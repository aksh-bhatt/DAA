#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int> freq(26,0);
        for(int i=0;i<n;i++){
            freq[arr[i]-'a']++;
        }
        int maxFreq = INT_MIN;
        char maxChar = 'a';
        for(int i=0;i<26;i++){
            if(maxFreq<freq[i]){
                maxFreq = freq[i];
                maxChar = i + 'a';
            }
        }
        if(maxFreq>1){
            cout<<maxChar<<"-"<<maxFreq<<endl;
        }
        else cout<<"No Duplicates Present"<<endl;
    }
}
