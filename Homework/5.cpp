#include <iostream>
#include <vector>

using namespace std;

bool findNumber(const vector<vector<int>>& arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (x == arr[i][j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter number for array [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int x;
    cout << "Enter number to find: ";
    cin >> x;

    if (findNumber(arr, n, x)) {
        cout << "Number is found\n";
    } else {
        cout << "Number is not found\n";
    }

    return 0;
}
