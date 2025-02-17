#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        // Step 1: Check if cost can be 1.
        bool possible = false;
        int required = k - 1;
        for (int i = 1; i < n; i++) {
            if (a[i] != 1) {
                if (n - i >= required) {
                    possible = true;
                    break;
                }
            }
        }
        if (possible) {
            cout << 1 << '\n';
            continue;
        }

        // Step 2: Simulate the even subarrays as 1,2,3,... and find the earliest error.
        int expected = 1;
        int pos = 0;
        int even_count = k / 2;
        int cost = -1;
        while (even_count > 0 && pos < n) {
            if (a[pos] != expected) {
                cost = expected;
                break;
            }
            expected++;
            pos += 2; // Skip the next (odd) subarray.
            even_count--;
        }
        if (cost == -1) {
            cost = expected;
        }
        cout << cost << '\n';
    }
    return 0;
}