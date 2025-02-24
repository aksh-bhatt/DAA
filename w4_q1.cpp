#include<bits/stdc++.h>
using namespace std;

int inversions = 0;
int comparisons = 0;

void merge(int low, int high, vector<int>& v) {
    int mid = low + (high - low) / 2;
    vector<int> v1(mid - low + 1);
    vector<int> v2(high - mid);


    for (int i = low; i <= mid; i++) {
        v1[i - low] = v[i];
    }

    for (int i = mid + 1; i <= high; i++) {
        v2[i - mid - 1] = v[i];
    }

    int i = 0, j = 0, k = low;

    while (i < v1.size() && j < v2.size()) {
        comparisons++;
        if (v1[i] <= v2[j]) {
            v[k++] = v1[i++];
        } else {
            inversions +=(v1.size()-i); 
            v[k++] = v2[j++];
        }
    }

    while (i < v1.size()) {
        v[k++] = v1[i++];
    }

    while (j < v2.size()) {
        v[k++] = v2[j++];
    }
}

void mergeSort(int low, int high, vector<int>& v) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(low, mid, v);
        mergeSort(mid + 1, high, v);
        merge(low, high, v);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int& x : v) {
            cin >> x;
        }
        inversions = 0;
        comparisons = 0;
        mergeSort(0, n - 1, v);
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
        cout << comparisons << endl;
        cout << inversions << endl;
    }
    return 0;
}
