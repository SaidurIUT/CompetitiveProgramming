#include<iostream>
using namespace std;

int main(){
    int t; cin >> t; 
    while(t--){
        int n,k,temp;
        cin >> n >> k;
        bool flag = false;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(temp == k){
                flag = true;
            }
        }
        if(flag){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}