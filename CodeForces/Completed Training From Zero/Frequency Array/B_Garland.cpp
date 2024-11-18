#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s1 , s2;
    int s1_calculation[26] = {0};
    int s2_calculation[26] = {0};
    int maxPossibleArea = 0;
    cin >> s1;
    cin >> s2;

    for(int i=0;i<s1.length();i++){
        s1_calculation[s1[i]-'a']++;
    }
    for(int i=0;i<s2.length();i++){
        s2_calculation[s2[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(s2_calculation[i]){
            if(s1_calculation[i]){
               maxPossibleArea +=min(s1_calculation[i],s2_calculation[i]);
            }else{
                maxPossibleArea = 0;
                break;
            }

        }
          
    }

    if(maxPossibleArea == 0){
        cout << "-1" << endl;
    }else{
        cout << maxPossibleArea << endl;
    }
}