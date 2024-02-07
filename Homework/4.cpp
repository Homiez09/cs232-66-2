#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cout << "size of array: ";
    cin >> n;

    int arr[n];

    cout << "number in array: ";
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            arr[i] = 1;
        } else {
            cin >> arr[i];
        }
    }

    sort(arr, arr + n);

    for(int i =0; i<n;i++){
        cout << arr[i] << " ";
    }

    for(int i =1; i<n+1;i++){
        if(arr[i] != i+1){
            cout << "\nmissing number: " << i+1;
            break;
        }
    }

    return 0;

    // O(n log n)
}
