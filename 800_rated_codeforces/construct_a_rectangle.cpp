#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
    int t;
    cin>> t;

    while(t--){
        vector<ll> sticks(3);

        for (auto &x: sticks) cin>> x;

        ll sum = accumulate(sticks.begin(), sticks.end(), 0);
        if (sum % 2 == 0){
            sort(sticks.begin(), sticks.end());

            if (sticks[0] != sticks[1] && sticks[1] != sticks[2]){
                if (sticks[2] == (sticks[0] + sticks[1])){
                    cout<< "YES"<< endl;
                } else {
                    cout<< "NO"<< endl;
                }
            } else {
                cout<< "YES"<< endl;
            }
        } else {
            cout<< "NO"<< endl;
        }
    }
    return 0;
}