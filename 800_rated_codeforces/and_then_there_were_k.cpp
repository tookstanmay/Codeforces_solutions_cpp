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

        int count = 0;
        while (n != 0){
            n >>= 1;
            count++;
        }

        cout<< (1 << (count - 1)) - 1<< endl;
    }
    return 0;
}