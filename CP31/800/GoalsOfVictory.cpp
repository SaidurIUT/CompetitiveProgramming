#include<iostream>
using namespace std;

int main(){
    int t; cin >> t; 
    while(t--){
        int n ; cin >> n;
        int totalGoals = 0;
        int goals;
        for(int i = 0; i < n-1; i++){
            cin >> goals;
            totalGoals += goals;
        }
        totalGoals = totalGoals*-1;
        
        cout << totalGoals << endl;
    }
}