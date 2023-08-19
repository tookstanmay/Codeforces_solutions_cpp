#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;

        ll minElement = LLONG_MAX, maxElement = LLONG_MIN;

        for (int i = 0; i < n; i++){
            ll x;
            cin>> x;

            if (x < minElement){
                minElement = x;
            }
            if (x > maxElement){
                maxElement = x;
            }
        }

        cout<< (maxElement - minElement)<< endl;
    }
    return 0;
}