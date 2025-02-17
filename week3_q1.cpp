#include <bits/stdc++.h>
using namespace std;

pair<int,int> insertionSort(vector<int>& arr)
{
    int n = arr.size();
    int shifts = 0;
    int comparisons = 0;
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        comparisons++;
        while (j >= 0 && arr[j] > key) {
            comparisons++;
            shifts++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return {comparisons,shifts};
}

void printArray(vector<int>& arr)
{
    int n = arr.size();
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int& x:arr) cin>>x;
        auto[comparsions,shifts] = insertionSort(arr);
        printArray(arr);
        cout<<"Comparisons "<<comparsions<<endl;
        cout<<"Shifts "<<shifts<<endl;
    }
    return 0;
}

