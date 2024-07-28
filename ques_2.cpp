#include <iostream>
#include <list>
#include <climits> 
using namespace std;

int main() {
    list<int> myList = {10, 5, 20, 15, 30};

    int max = INT_MIN;
    for (int num : myList) {
        if (num > max) {
            max = num;
        }
    }

    cout << "Maximum element in the list: " << max << endl;

    return 0;
}
