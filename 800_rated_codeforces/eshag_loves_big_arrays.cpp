#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
    int t;
    cin>> t;

    while (t--){
        int n;
        cin>> n;

        vector<int> arr(n);
        for (auto &x: arr) cin>> x;

        unordered_map<int, int> mp;
        for (auto x: arr) mp[x]++;

        int minElement = *min_element(arr.begin(), arr.end());

        int minElementCount = mp[minElement];

        cout<< (n - minElementCount)<< endl;
    }
    return 0;
}