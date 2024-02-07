#include <iostream>

using namespace std;

int findMin(int *array, int n) {
    int minDiff = 999999;
    for (int j = 0; j < n-1; j++) minDiff = min(minDiff, abs(array[j] - array[j+1]));
    return minDiff;
}

int main() {
    int n;
    cin >> n;

    int **matrix = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int minDiff = 999999;

    for (int i = 0; i < n; i++) {
        int temp_minDiff = 999999;
        minDiff = min(minDiff, findMin(matrix[i], n));
    }

    cout << minDiff << endl;

    return 0;

// O(n^2)