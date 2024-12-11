#include<iostream>
#include<vector>
#include<cmath>


using namespace std;

//maek a struct for two integers

struct pairs{
    int x, y;
};

int main(){

    int m,n;
    int ans = 0;
    cin>>m>>n;
    vector<int> a(m), b(n);
    vector<pairs> p(n);
    for(int i=0; i<m; i++){
        cin>>a[i];
    }

    int ini , fin;
    for(int i=0; i<n; i++){
        cin >> ini >> fin;
        p[i].x = ini;
        p[i].y = fin;
    }

    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = p[i].x -1; j < p[i].y; j++)
        {
            temp += a[j];   
        }
        if(temp > 0){
            ans += temp;
        }
    }

    cout<<ans<<endl;


}