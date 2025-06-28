#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        int a=-1, b=-1;
        int numberofa=0, numberofb=0;
        bool moreThanTwoUnique = false;
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(int i=0; i<n; i++){
            if(a == v[i]){
                numberofa++;
            }else if(b == v[i]){
                numberofb++;
            }else if(a == -1){
                a = v[i];
                numberofa++;
            }else if(b == -1){
                b = v[i];
                numberofb++;
            }else{
                moreThanTwoUnique = true;
                break;
            }
        }

        if(moreThanTwoUnique){
            cout << "No" << endl;
            continue;
        }
        if((abs(numberofa - numberofb) < 2) || b==-1 ){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    //test comment
    

}
