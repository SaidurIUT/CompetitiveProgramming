#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int l,r,d,u;
        cin >> l >> r >> d >> u;

        // if l == r == d == u then print YES  other wise NO 
        if(l == r && d == u && u == l && r == d){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    return 0;
}