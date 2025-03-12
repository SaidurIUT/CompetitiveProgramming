#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        priority_queue<int> maxHeap;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            maxHeap.push(a);
        }

        while (maxHeap.size() > 1) {
            int a = maxHeap.top();
            maxHeap.pop();
            int b = maxHeap.top();
            maxHeap.pop();
            int x = a + b - 1;
            maxHeap.push(x);
        }

        cout << maxHeap.top() << '\n';
    }

    return 0;
}
