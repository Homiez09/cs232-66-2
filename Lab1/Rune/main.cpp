#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int runes[n];

    for(int i = 0; i < n; i++) {
        cin >> runes[i];
    }
    
    sort(runes, runes + n);
    
    int runeDiff = 0;

    for (int i = 0; i < k; i++) {
        runeDiff += runes[n-1-i];
        runeDiff -= runes[i];
    }

    cout << runeDiff << endl;
    return 0;
}