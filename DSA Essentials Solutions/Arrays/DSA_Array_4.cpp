#include <bits/stdc++.h>
using namespace std;

pair<int,int> sumofpairs(vector<int> arr,int x) {
    int s=0;
    int l=arr.size()-1;
    int sum=0;

    pair<int,int> result;

    while (s<l) {
        int cs = arr[s] + arr[l];
        if (abs(cs-x)<abs(sum-x)) {
            sum = cs;
            result = {arr[s],arr[l]};
        }

        if (cs<x) {
            s++;
        }
        else {
            l--;
        }
    }

    return result;
}

int main () {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    pair<int,int> answer = sumofpairs(arr,x);
    cout << answer.first << endl;
    cout << answer.second << endl;

    return 0;
}