#include <iostream>
#include <vector>

using namespace std;

bool canAchieveSum(const vector<int>& costs, int numOfItems, int targetSum) {
    vector<bool> dp(targetSum + 1, false);
    dp[0] = true;

    for (int i = 0; i < numOfItems; ++i) {
        for (int j = costs[i]; j <= targetSum; ++j) {
            dp[j] = dp[j] || dp[j - costs[i]];
        }
    }

    return dp[targetSum];
}

int main() {
    int numOfItems, targetSum;
    cin >> numOfItems >> targetSum;

    vector<int> costs(numOfItems);
    for (int i = 0; i < numOfItems; ++i) {
        cin >> costs[i];
    }

    if (canAchieveSum(costs, numOfItems, targetSum)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}