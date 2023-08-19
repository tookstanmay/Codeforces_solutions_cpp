#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll n, k;
      cin>> n>> k;

      vector<ll> a(n);
      for (auto &x : a) cin>> x;

      vector<pair<ll, ll>> indices;
      for (int i = 0; i < n; i++){
         ll val = a[i] % k;
         if (val == 0) val = k;
         indices.push_back({-val, i + 1});
      }

      sort(indices.begin(), indices.end());
      for (auto i: indices){
         cout<< i.second<< " ";
      }  cout<< endl;
   }
   return 0;
}