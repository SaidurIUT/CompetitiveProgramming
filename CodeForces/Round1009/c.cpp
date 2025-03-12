#include <bits/stdc++.h>
using namespace std;

int solve(long long x) {
    // Special cases
    if (x == 2 || x == 3 || x == 4) {
        return -1;
    }
    
    // Check if x is a power of 2 (only one bit set)
    if ((x & (x - 1)) == 0) {
        return -1;
    }
    
    // Check if all bits are set (like 7 -> 111, 15 -> 1111)
    long long msb_pos = 63 - __builtin_clzll(x);
    long long all_bits_set = (1LL << (msb_pos + 1)) - 1;
    
    if (x == all_bits_set) {
        return -1;
    }
    
    // Clear the MSB
    long long y = x & ~(1LL << msb_pos);
    
    // Find the first 0 from left (after MSB) and set it to 1
    long long first_zero_pos = msb_pos - 1;
    while ((x & (1LL << first_zero_pos)) && first_zero_pos >= 0) {
        first_zero_pos--;
    }
    
    // Set this bit in y
    y |= (1LL << first_zero_pos);
    
    return y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long x;
        cin >> x;
        cout << solve(x) << '\n';
    }
    
    return 0;
}