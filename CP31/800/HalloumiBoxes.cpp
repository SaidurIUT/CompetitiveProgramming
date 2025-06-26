#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n,k; 
        cin >> n >> k;

     
        bool inAssendingOrder = true;
        int lastBox = -1;
        int box;
        cin >> box;
        lastBox = box;
        for(int i = 0; i < n-1; i++) {
           
            cin >> box;
            if(box < lastBox) {
                inAssendingOrder = false;
            }
            lastBox = box;
        }

        if(k>1 || inAssendingOrder) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}