#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64
#define ld long double


int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;

        int size = 2 * n;

        vector<ll> arr(size);

        for (auto &x: arr) cin>> x;

        sort(arr.begin(), arr.end());

        int i = 0;
        while (i < n){
            cout<< arr[i]<< " "<< arr[n + i]<< " ";
            i++;
        }   cout<< endl;
    }
    return 0;
}