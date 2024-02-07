#include <iostream>
#include <algorithm>

using namespace std;

int sumNumber(int a) {
    int sum = 0;
    while (a > 0) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int gdc(int a, int b) {
    if (b == 0) return a;
    return gdc(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (gdc(i, sumNumber(i))  != 1) cout << i << " ";
    }
    return 0;
}