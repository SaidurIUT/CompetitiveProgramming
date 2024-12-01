#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    long long n, k;
    cin>>n>>k;
    vector<long long> divisors;

    long long lim = sqrt(n);

    for(long long i=1; i<=lim; i++){
        if(n%i == 0){
            divisors.push_back(i);
            if(n/i != i){
                divisors.push_back(n/i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    if(divisors.size() < k){
        cout<<-1<<endl;
    }else{
        cout<<divisors[k-1]<<endl;
    }
}