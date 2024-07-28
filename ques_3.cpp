#include <iostream>
using namespace std;

int divisibleBy3(int arr[], int size) {
    if (size <= 0) {
        cout << "Invalid Input" << endl;
        return -1;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << "Invalid Input" << endl;
            return -1;
        }
    }

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int arr[20];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = divisibleBy3(arr, n);
    if (result != -1) {
        cout << result << endl;
    }

    return 0;
}
