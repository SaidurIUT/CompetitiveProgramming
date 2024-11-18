#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t,n;
    vector<int> a; 
    cin >> t;
    while(t--){
        cin >> n;
        a.resize(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        if(n<3){
            cout <<"-1"<<endl;
        }else{
            int found = 0;
            sort(a.begin(),a.end());
            for(int i = n-1; i>=2 ; i--){
                if(a[i] == a[i-1] && a[i-1] == a[i-2]){
                    found = a[i];
                    break;
                }
            }
            if(found){
               cout << found << endl;
            }else{
                cout << "-1" << endl;
            }
         
        }

    }
}