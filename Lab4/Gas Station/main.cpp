#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> fill;
    vector<int> use;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        fill.push_back(temp);
    }

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        use.push_back(temp);
    }

    fill.insert(fill.end(), fill.begin(), fill.end());
    use.insert(use.end(), use.begin(), use.end());

    for (int i = 0; i < n; i++) {
        int fuel = 0;
        for (int j = i; j <= n+i; j++) {
            fuel += fill[j];
            fuel -= use[j];
            if (fuel < 0) break;
            if (j == n+i) {
                cout << i << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
    
    return 0;
}
