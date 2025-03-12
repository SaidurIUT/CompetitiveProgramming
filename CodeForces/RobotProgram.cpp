#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        long long n ,x,k ;
        long long time = 0, ans = 0;
        string s;
        cin >> n >> x >> k;
        cin >> s;
       

        long long progressInOneCycle = 0;
        for(long long i = 0; i < n; i++){
            if(s[i] == 'R'){
                progressInOneCycle++;
            }else{
                progressInOneCycle--;
            }
        }

        if(progressInOneCycle == 0 && n < abs(x)){ 
            cout << 0 << endl;
            continue;
        }

        if(progressInOneCycle != 0 && n < abs(x)){
            x = x%progressInOneCycle;
            time = n*abs(x/progressInOneCycle);
            if(x == 0  && time < k){
                ans++;
            }
            
        }

        long long i = 0;
        while(time < k){
            if(s[i] == 'R'){
                x++;
            }else{
                x--;
            }
            time++;
            i++;
            if(i == n){
                i = 0;
            }

            if( x == 0){
                ans++;
                break;    
            }
        }
        
        long long resetTimeOnceFallin0 = 0;
        long long temp = 0;
        bool willRepeat = false;
        for(long long j = 0; j < n; j++){
            if(s[j] == 'R'){
               temp++;
            }else{
                temp--;
            }
            if(temp == 0){
                resetTimeOnceFallin0 = j+1;
                willRepeat = true;
                break;
            }
        }
        if(willRepeat){
            ans = ans + (k-time)/resetTimeOnceFallin0;
        }
        cout << ans << endl;
    }
    return 0;
}
