#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
    int t;
    cin>> t;

    while (t--){
        ll n;
        cin>> n;

        ll ans = n/ 10;
        if ((n + 1) % 10 == 0){
            cout<< ans + 1<< endl;
        } else {
            cout<< ans<< endl;
        }
    }
    return 0;
}