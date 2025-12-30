#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate_Easy(vector<int> arr, int k) {
    int n = arr.size();
    k = k % n;

    vector<int> ans;

    for (int i = n-k; i < n; i++) {
        ans.push_back(arr[i]);
    }

    for (int i = 0; i < n-k; i++) {
        ans.push_back(arr[i]);
    }

    return ans;
}

vector<int> kRotate_Optimized(vector<int> arr, int k) {
    int n = arr.size();
    k = k % n;

    reverse(arr.begin(), arr.end()+n-k);
    reverse(arr.begin()+n-k, arr.end());
    reverse(arr.begin(), arr.end());

    return arr;
}

int main() {
    int t;
    cin >> t;

    vector<int> arr(t);

    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    //vector<int> ans = kRotate_Easy(arr, k);
    vector <int> ans = kRotate_Easy(arr,k);

    for (int i = 0; i < t; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}