#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        long long ans = 0;
        long long time = 0;
        unordered_map<long long, long long> visited; // To detect loops

        long long progressInOneCycle = 0;
        for (char c : s) {
            if (c == 'R') progressInOneCycle++;
            else progressInOneCycle--;
        }

        // Normalize x within one cycle if progress is nonzero
        if (progressInOneCycle != 0) {
            x = ((x % progressInOneCycle) + progressInOneCycle) % progressInOneCycle;
        }

        long long i = 0;
        while (time < k) {
            if (visited.count(x)) {
                // We've encountered this position before; we are in a loop.
                long long cycle_length = time - visited[x];
                long long remaining_time = k - time;
                ans += (remaining_time / cycle_length);
                break;
            }
            visited[x] = time;

            if (x == 0) ans++; // Reached zero

            if (s[i] == 'R') x++;
            else x--;

            time++;
            i = (i + 1) % n;
        }

        cout << ans << endl;
    }
    return 0;
}
