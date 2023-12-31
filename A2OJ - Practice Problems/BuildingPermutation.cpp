#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i=0; i<n; i++) cin >> nums[i];

    sort(nums.begin(), nums.end());

    long long operations = 0;

    for (int i=0; i<n; i++) operations += abs(nums[i] - (i+1));

    cout << operations;
}