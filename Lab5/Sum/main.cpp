#include <iostream>
#include <climits>

using namespace std;

long long maxSubarraySum(long long arr[], int n) {
    long long maxSum = LONG_LONG_MIN;
    long long currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int n;
    cin >> n;

    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long result = maxSubarraySum(arr, n);
    cout << result << endl;

    return 0;
}