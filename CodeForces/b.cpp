#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pair<int,int>>
#define vll vector<pair<ll,ll>>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vvii vector<vector<pair<int,int>>>
#define vvll vector<vector<pair<ll,ll>>>
#define vst vector<string>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define mkunique(x) sort(all(x));(x).erase(unique(all(x)),(x).end())
#define fi first
#define se second
#define mp make_pair
#define si(x) int(x.size())
#define rep(i,n) for (int i = 0; i < (n); i++)
const int mod=998244353,MAX=300005,INF=15<<26;
 
int main(){
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int T;cin>>T;
    while(T--){
        int n;cin>>n;
       string s;
       cin>>s;
       int u = 0, l = 0;
       for(int i=0;i<n;i++){
        if(s[i] == '-') u++;
        else l++;
       } 
       if(u<2 || l < 1) cout<<0<<endl;
       else {
        cout << (1LL* u * u/4) * l<<endl;
       }
    }
}