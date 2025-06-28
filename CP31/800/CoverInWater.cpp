#include<iostream>
using namespace std;

int main(){
    int t ; cin >> t;
    while(t--){
        int n;
        string s;
        int totalEmptyCells = 0;
        int tempEmptyCells = 0;
        bool continuousThreeEmptyCells = false;
        cin >>n ;
        cin >> s;
        for(int i= 0 ; i < n ;i ++){
            if(s[i]=='.'){
                tempEmptyCells++;
                totalEmptyCells++;
                if(tempEmptyCells > 2){
                    continuousThreeEmptyCells = true;
                    break;
                }
            }else{
                tempEmptyCells =0;
            }
        }

        if(continuousThreeEmptyCells){
            cout<<2<<endl;
        }else{
            cout<<totalEmptyCells<<endl;
        }

    }
}