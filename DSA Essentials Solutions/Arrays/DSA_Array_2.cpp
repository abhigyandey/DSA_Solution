#include <bits/stdc++.h>
using namespace std;

int maximum_subarray_sum(int arr[],int n){

    int cs = 0;
    int largest = 0;

    for(int i=0;i<n;i++){
        cs = cs + arr[i];
        if(cs < 0){
            cs = 0;
        }
        largest = max(largest, cs);
    }

    return largest;
}

int main() {
    int t;
    cin >> t;

    int arr[t];

    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }

    int largest_subarray_sum = maximum_subarray_sum(arr,t);
    cout << largest_subarray_sum;

}