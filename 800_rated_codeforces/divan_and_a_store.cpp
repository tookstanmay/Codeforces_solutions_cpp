#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll n, l, r, k;
      cin>> n>> l>> r>> k;

      vector<ll> chocolates(n);
      for (auto &x: chocolates) cin>> x;

      sort(chocolates.begin(), chocolates.end());

      ll sum = 0;
      ll count = 0;
      for (int i = 0; i < n; i++){
         if (chocolates[i] < l){
            continue;
         }
         if (chocolates[i] > r || sum > k){
            break;
         }
         if (chocolates[i] >= l && chocolates[i] <= r && (sum + chocolates[i]) <= k){
            count++;
            sum += chocolates[i];
         }
      }

      cout<< count<< endl;
   }
   return 0;
}