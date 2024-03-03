#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int N, W;
vector<int> w_values, v_values;
double total_value = 0.0;
int subset_count = 0;

void findSubset(int id, int weight, double value) {
    if (id == N) {
        if (weight <= W) {
            total_value += value;
            subset_count++;
        }
        return;
    }

    findSubset(id + 1, weight + w_values[id], value + v_values[id]);

    findSubset(id + 1, weight, value);
}

int main() {
    cin >> N >> W;
    w_values.resize(N);
    v_values.resize(N);

    for (int i = 0; i < N; ++i) {
        cin >> w_values[i] >> v_values[i];
    }

    findSubset(0, 0, 0.0);

    cout << fixed << setprecision(2) << total_value / subset_count << endl;

    return 0;
}
