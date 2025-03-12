#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x, k;
        string s;
        cin >> n >> x >> k;
        cin >> s;
        
        long long ans = 0;
        
        // Calculate the net displacement after one full sequence
        long long net_displacement = 0;
        for (int i = 0; i < n; i++) {
            net_displacement += (s[i] == 'R' ? 1 : -1);
        }
        
        // If we're already at 0, we immediately reset
        if (x == 0) {
            ans++; // Count the initial entry
            k--; // Decrease the available time
            if (k <= 0) {
                cout << ans << endl;
                continue;
            }
        }
        
        // Simulate until first entry to point 0 or until time runs out
        long long pos = x;
        long long time_to_first_zero = 0;
        bool will_ever_reach_zero = false;
        
        for (int i = 0; i < min(n * 2, k); i++) { // Check at most 2 full sequences
            pos += (s[i % n] == 'R' ? 1 : -1);
            time_to_first_zero++;
            
            if (pos == 0) {
                will_ever_reach_zero = true;
                ans++;
                break;
            }
        }
        
        // If we never reach 0 or we run out of time
        if (!will_ever_reach_zero || time_to_first_zero >= k) {
            cout << ans << endl;
            continue;
        }
        
        // After first zero, the robot restarts the sequence
        // Find how many times it hits 0 in one complete sequence starting from 0
        vector<long long> zero_positions;
        pos = 0;
        for (int i = 0; i < n; i++) {
            pos += (s[i] == 'R' ? 1 : -1);
            if (pos == 0) {
                zero_positions.push_back(i + 1); // +1 because we count positions from 1
            }
        }
        
        // Calculate remaining time after first zero entry
        long long remaining_time = k - time_to_first_zero;
        
        // If no zeros in a complete sequence starting from 0
        if (zero_positions.empty()) {
            // Check if we can reach 0 after a full sequence due to net displacement
            if (net_displacement != 0) {
                // Calculate how many full sequences we can fit
                long long full_sequences = remaining_time / n;
                
                // Check if after some number of full sequences, we return to 0
                if ((full_sequences * net_displacement) == 0) {
                    ans++;
                }
                
                // Simulate any remaining time
                pos = (full_sequences * net_displacement);
                for (int i = 0; i < remaining_time % n; i++) {
                    pos += (s[i] == 'R' ? 1 : -1);
                    if (pos == 0) {
                        ans++;
                    }
                }
            }
        } else {
            // We have zeros in a single sequence
            
            // Calculate how many full sequences we can fit
            long long full_sequences = remaining_time / n;
            ans += full_sequences * zero_positions.size();
            
            // Simulate the remaining partial sequence
            remaining_time %= n;
            pos = 0;
            for (int i = 0; i < remaining_time; i++) {
                pos += (s[i] == 'R' ? 1 : -1);
                if (pos == 0) {
                    ans++;
                }
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}