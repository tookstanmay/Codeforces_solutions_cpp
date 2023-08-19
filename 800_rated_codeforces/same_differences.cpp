# include<bits/stdc++.h>
# define ll long long
using namespace std;

int main(){

    int t;
    cin>> t;

    while (t--){
        int n;
        cin>> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++){
            cin>> arr[i];
        }

        map<int, ll> ct;
        ll count = 0;
        for (int i = 0; i < n; i++){
            count += ct[arr[i] - i];
            ct[arr[i] - i]++;
        }

        cout<< count<< endl;
    }

    return 0;
}