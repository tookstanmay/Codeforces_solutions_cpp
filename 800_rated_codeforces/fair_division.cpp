#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

void solve(vector<int> &arr){
    int ones = 0, twos = 0;
    for (auto i: arr){
        if (i == 1) ones++;
        else twos++;
    }

    if (ones % 2 == 0){
        if (ones == 0){
            if (twos % 2 == 0){
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

int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;

        vector<int> candies(n);
        for (auto &x: candies) cin>> x;

        solve(candies);
    }
    return 0;
}