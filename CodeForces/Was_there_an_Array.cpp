#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    
    while(t--){
        bool flag = true;
        cin >> n;
        vector<int> a(n-2);
        for(int i = 0; i < n-2; i++){
            cin >> a[i];
        }

        for(int i = 1 ; i < n-3 ; i++){
            if(a[i-1]== 1 && a[i] == 0 && a[i+1] == 1){
                flag = false;
                break;
            }
        }

        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}