#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int *positive = (int*)malloc(sizeof(int) * n);
    int *negative = (int*)malloc(sizeof(int) * n);

    positive[0] = 99;

    int positive_start = 0;
    int negative_start = 0;
    for (int i = 0, j = 0, k = 0; k < n; k++) {
        if (array[k] > 0) {
            positive[positive_start] = array[k];
            positive_start++;
        } else if (array[k] < 0) {
            negative[negative_start] = array[k];
            negative_start++;
        } 
    }

    for (int i = 0; i < negative_start; i++) {
        cout << negative[i] << " ";
    }

    for (int i = 0; i < positive_start; i++) {
        cout << positive[i] << " ";
    }

    return 0;
}

// O(n)