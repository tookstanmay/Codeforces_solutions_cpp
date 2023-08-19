#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
    int t;
    cin>> t;

    while (t--){
        string str;
        cin>> str;
        
        if (str.size() <= 1){
            cout<< 0<< endl;
            continue;
        }

        unordered_map<char, int> mp;
        for (int i = 0; i < str.size(); i++){
            char ch = str[i];

            mp[ch]++;
        }

        int ones = 0, greater_than_ones = 0;
        for (auto i: mp){
            if (i.second == 1){
                ones++;
            } else {
                greater_than_ones++;
            }
        }

        int ans = (ones/ 2) + greater_than_ones;
        cout<< ans<< endl;
    }
    return 0;
}