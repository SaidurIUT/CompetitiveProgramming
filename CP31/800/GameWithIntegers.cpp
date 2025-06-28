#include<iostream>
using namespace std;

int main(){
    int t; cin >> t; 
    while(t--){
        int num;cin >> num;
        if(num%3){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
}