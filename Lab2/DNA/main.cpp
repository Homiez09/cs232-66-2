#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string dna;
    string *pDna = &dna;

    cin >> dna;

    int max = 1;
    int count = 1;
    char temp = dna[0];

    for (int i = 1; i < dna.length() + 1; i++) {
        if (dna[i] == temp) {
            count++;
        } else {
            if (count > max) {
                max = count;   
            }
            temp = dna[i];
            count = 1;   
        }
    }

    cout << max;
}