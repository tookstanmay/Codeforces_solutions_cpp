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
        for (auto i: arr) mp[i]++;

        int our_element = 0;
        for (auto i: mp){
            if (i.second == 1){
                our_element = i.first;
            }
        }

        int index_of_our_element = find(arr.begin(), arr.end(), our_element) - arr.begin();

        cout<< index_of_our_element + 1<< endl;
    }
    return 0;
}