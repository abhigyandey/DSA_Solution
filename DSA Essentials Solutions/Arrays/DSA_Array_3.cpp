#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> arr, int v) {
    int s = 0;
    int l = arr.size()-1;

    if (v < arr[0]) {
        return -1;
    }

    if (v >= arr[arr.size()-1]) {
        return arr[arr.size()-1];
    }

    int result = -1;

    while (s <= l) {
        int mid = (s+l)/2;

        if (arr[mid] == v) {
            return arr[mid];
        }
        else if (arr[mid] > v) {
            l = mid-1;
        }
        else {
            result = arr[mid];
            s = mid+1;
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    vector<int> arr(t);
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int v;
    cin >> v;

    int answer = lower_bound(arr, v);
    cout << answer << endl;

    return 0;
}