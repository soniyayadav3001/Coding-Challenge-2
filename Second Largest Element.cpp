#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 5, 30, 25};
    int n = 5;

    int first = arr[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    cout << "Second Largest: " << second;
    return 0;
}
