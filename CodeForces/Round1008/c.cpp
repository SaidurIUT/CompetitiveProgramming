#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<ll> b(2*n);
        for (int i = 0; i < 2*n; i++) {
            cin >> b[i];
        }
        
        // Consider b as a2, a3, ..., a(2n+1)
        // Note: a is 1-indexed but internally we'll use 0-indexed
        vector<ll> a(2*n+1);
        for (int i = 0; i < 2*n; i++) {
            a[i+1] = b[i];  // a[1] = b[0], a[2] = b[1], etc.
        }
        
        // Calculate a0 (equivalent to a1 in problem statement)
        // a0 = a1 - a2 + a3 - a4 + ... + a(2n-1) - a(2n)
        ll a0 = 0;
        for (int i = 1; i <= 2*n; i++) {
            if (i % 2 == 1) {  // odd position (1, 3, 5, ...)
                a0 += a[i];
            } else {  // even position (2, 4, 6, ...)
                a0 -= a[i];
            }
        }
        
        // If a0 is positive, just output the sequence
        if (a0 > 0) {
            cout << a0 << " ";
            for (int i = 1; i <= 2*n; i++) {
                cout << a[i] << " ";
            }
        } else {
            // If a0 is negative or zero, swap adjacent elements
            cout << abs(a0) << " ";
            
            // Print remaining elements with swaps (a2,a1,a4,a3,...)
            for (int i = 1; i < 2*n; i += 2) {
                if (i+1 <= 2*n) {
                    cout << a[i+1] << " " << a[i] << " ";
                } else {
                    cout << a[i] << " ";
                }
            }
        }
        
        cout << endl;
    }
    
    return 0;
}