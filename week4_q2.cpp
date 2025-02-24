#include<bits/stdc++.h>
using namespace std;

int comparisons = 0;
int swaps = 0;

int partition(int low,int high,vector<int>& v){
    int pivot = v[low];
    int i = low+1;
    for(int j = low+1; j <= high; j++){
        comparisons++;
        if(v[j] < pivot){
            swap(v[i],v[j]);
            swaps++;
            i++;
        }
    }
    swap(v[low],v[i-1]);
    swaps++;
    return i-1;
}

void quickSort(int low,int high,vector<int>& v){
    if(low >= high) return;
    int pi = partition(low,high,v);
    quickSort(low,pi-1,v);
    quickSort(pi+1,high,v);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int& x:v) cin>>x;
        comparisons = 0;
        swaps = 0;
        quickSort(0,n-1,v);
        for(int x:v) cout<<x<<" ";
        cout<<endl;
        cout<<comparisons<<endl;
        cout<<swaps<<endl;
    }
    return 0;
}
