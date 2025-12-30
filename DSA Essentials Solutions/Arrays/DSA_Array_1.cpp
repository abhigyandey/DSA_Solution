#include <bits/stdc++.h>
using namespace std;

int largest_number(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

int main() {
    int t;
    cin >> t;

    vector<int> arr(t);

    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int result = largest_number(arr);
    cout << result << endl;

    return 0;
}