#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> freq;
        for(int i=0; i < n; i++){
            cin >> arr[i];
            freq[arr[i]]++;
        }

        vector<int> len(n, 0);
        if(freq[arr[0]] == 1) len[0] = 1;
        else len[0] = 0;

        for(int i=1; i < n; i++){
            if(freq[arr[i]] == 1){
                len[i] = len[i-1] + 1;
            } else {
                len[i] = 0;
            }
        }

        int mx = *max_element(len.begin(), len.end());
        if(mx == 0){
            cout << "0\n";
            continue;
        }

        for(int i=0; i < n; i++){
            if(len[i] == mx){
                int left = i - mx + 1;
                int right = i;
                cout << left + 1 << " " << right + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}