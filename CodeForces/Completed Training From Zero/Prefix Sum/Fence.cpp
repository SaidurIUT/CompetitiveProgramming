#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;


int main(){

    int n,k;
    cin >> n >> k;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int sum = int(1e9);
    int index  = 0;
    int temp =0;; 
    for(int i = 0 ; i < k ; i++){
        temp += a[i];
    }
    if(temp < sum){
            sum = temp;
            index = 0;
    }
    for(int i=1 ; i<= n-k ; i++){
        
        temp = temp - a[i-1] + a[i+k-1];
    
        if(temp < sum){
            sum = temp;
            index = i;
        }
    }

    cout << index+1 << endl;


}