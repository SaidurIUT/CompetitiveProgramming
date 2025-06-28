#include<iostream>
#include<vector>
using namespace std;

bool checkRoundNum(int x){
    int count_of_zeros = 0;
    int count_of_digits = 0;
    while(x){
        if(x%10 ==0){
            count_of_zeros++;
        }
        count_of_digits++;
        x /= 10;
    }
    return count_of_zeros == count_of_digits - 1;
}


int main(){
    vector <int> roundNumbers;
    roundNumbers.push_back(0);
    for(int i=1 ; i<=999999 ;i++ ){
        if(checkRoundNum(i)){
            roundNumbers.push_back(roundNumbers.back() + 1);
        }
        else{
            roundNumbers.push_back(roundNumbers.back());
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << roundNumbers[n] << endl;
    }
}
