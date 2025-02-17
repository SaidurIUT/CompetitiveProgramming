#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        
        set<int> distinct_a(a.begin(), a.end());
        set<int> distinct_b(b.begin(), b.end());
        
        if (distinct_a.size() >= 3 || distinct_b.size() >= 3) {
            cout << "YES\n";
            continue;
        }
        
        if (distinct_a.size() >= 2 && distinct_b.size() >= 2) {
            cout << "YES\n";
            continue;
        }
        
        cout << "NO\n";
    }
    return 0;
}
