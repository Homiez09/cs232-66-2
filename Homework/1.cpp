#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int numbers[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < n; i++) {
        numbers[array[i] - 1]++;
    }

    int number = 0;
    int max = 0;

    for (int i = 0; i < 9; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            number = i + 1;
        }
    }

    if (max > n / 2)
        cout << number << endl;
    else 
        cout << "Noting" << endl;

    return 0;
}

// O(n)