#include <iostream>
#include <algorithm>
using namespace std;

struct Pair {
    int value;
    int originalIndex;
};

// Comparator function for sorting
bool compare(Pair a, Pair b) {
    return a.value < b.value;
}

int main() {
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Pair pairs[n];
    for (int i = 0; i < n; i++) {
        pairs[i].value = arr[i];
        pairs[i].originalIndex = i;
    }

    // Use the comparator function instead of a lambda
    sort(pairs, pairs + n, compare);

    int firstIndex = -1, secondIndex = -1;
    for (int i = 0; i < n; i++) {
        int target = x - pairs[i].value;
        int low = i + 1, high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (pairs[mid].value == target) {
                firstIndex = pairs[i].originalIndex;
                secondIndex = pairs[mid].originalIndex;
                break;
            } else if (pairs[mid].value < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (secondIndex != -1) {
            break;
        }
    }

    if (secondIndex != -1) {
        cout << firstIndex+1 << " " << secondIndex+1<< endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
