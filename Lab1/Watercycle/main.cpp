#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int ship[n];

    for(int i = 0; i < n; i++) {
        cin >> ship[i];
    }

    sort(ship, ship + n);

    int count = 0;

    for (int i=0, j=n-1; i<=j; j--) {
        if (ship[j] + ship[i] <= x) {
            i++;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}