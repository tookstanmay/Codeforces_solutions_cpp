#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
    int t;
    cin>> t;

    while(t--){
        string str;
        cin>> str;

        unordered_map<char, int> mp;
        for (auto i: str){
            mp[i]++;
        }

        mp['B'] -= mp['A'];
        mp['B'] -= mp['C'];
        mp['A'] = 0;
        mp['C'] = 0;

        if (mp['B'] == 0){
            cout<< "YES"<< endl;
        } else {
            cout<< "NO"<< endl;
        }
    }
    return 0;
}