#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--){
        int n , k , p , ans= 0;
        
        cin >> n >> k >> p;
        k = abs(k);
        ans = k/p;
        if(k%p != 0) ans++;

        if(ans > n ){
            cout << -1 << endl;
        }else {
            cout << ans << endl;
        }
    }
}