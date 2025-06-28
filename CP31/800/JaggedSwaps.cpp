#include<iostream>
using namespace std;

int main (){
    int t; cin >> t ;

    while(t--){
        int n; cin >> n;
        int firstNumber; cin >> firstNumber ; 
        int temp;
        for(int i=0; i<n-1; i++){
            cin >> temp;
        }

        if(firstNumber == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}