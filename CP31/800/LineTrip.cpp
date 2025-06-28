#include<iostream>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int station;cin >> station;
        int lastStation = station;
        int lowestVolume = station;

        for(int i =0; i < n-1; i++){
            cin >> station;
            if((station - lastStation) > lowestVolume) {
                lowestVolume = (station - lastStation);                
            }
            lastStation = station;
        }

        if((k-lastStation)*2 > lowestVolume) {
            lowestVolume = (k - lastStation) * 2;
        }

        cout << lowestVolume << endl;

    }
}