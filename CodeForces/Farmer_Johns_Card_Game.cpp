    #include<bits/stdc++.h>
    using namespace std;

    // Custom comparison function for ascending order
    bool compareRows(const vector<int> &v1, const vector<int> &v2) {
        return v1[0] < v2[0]; // Changed from > to < for ascending order
    }

    int main() {
        int t;
        cin >> t;
        while(t--){
            int n,m;
            cin >> n >> m;
            vector<vector<int> > a(n, vector<int>(m+1));
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin >> a[i][j];
                }

                
                a[i][m] = i+1 ;
                sort(a[i].begin(), a[i].end()-1);
            }
            
            // now reorder the rows in increasing order of the first element of the row
            sort(a.begin(), a.end(), compareRows);

            bool flag = true;

            // So you need to check collumn wise. YOu have to check if the upper one is less than the lower one . if not then make the flag true and break the loop
            for(int j=0;j<m;j++){
                for(int i=0;i<n-1;i++){
                    if(a[i][j] > a[i+1][j]){
                        flag = false;
                        goto end;
                    }
                }
            
            }

            // also  check the last element of the collumn is less than the first element of the next collumn  if not then make the flag true and break the loop

            for(int j=0;j<m-1;j++){
                if(a[n-1][j] > a[0][j+1]){
                    flag = false;
                    goto end;
                }
            }
        
            end:

            if(!flag){
                cout << -1 << endl;
            }else{
                for(int i=0;i<n;i++){
                    cout << a[i][m] << " ";
                }
                cout << endl;
            }

            

            
        }
        return 0;
    }