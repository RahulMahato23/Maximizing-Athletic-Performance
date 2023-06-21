#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;


lli maxNonAdjacentSubarraySum(const vector < lli > &nums){
    int n=nums.size();
    if (n==0) {
        return 0;
    }
    lli zero=0;
    lli inclusive=max(nums[0], zero);
    lli exclusive=0;
    for (int i=1; i<n; i++) {
        lli prevInclusive=inclusive;
        inclusive=max(inclusive, exclusive+max(nums[i], zero));
        exclusive=prevInclusive;
    }
    return max(inclusive, exclusive);
}

int main() {
    int n;
    cin >> n;
    vector < lli > nums;
    for (int i=0; i<n; i++){
        lli val;
        cin >> val;
        nums.push_back(val);
    }
    lli maxSum=maxNonAdjacentSubarraySum(nums);
    
    cout << maxSum << endl;
    
    return 0;
}
