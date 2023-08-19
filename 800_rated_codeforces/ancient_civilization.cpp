#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __ll64

int main() {
   int t;
   cin >> t;

   while (t--) {
      ll n, l;
      cin >> n >> l;

      vector<ll> arr(n);
      for (auto &x : arr) cin >> x;

      ll ans = 0;
      for (ll i = 0; i < l; i++) {
         ll count = 0;
         for (ll j = 0; j < n; j++) {
            if (arr[j] & (1 << i)) {
               count++;
            }
         }

         if (count > n - count) {
            ans += (1 << i);
         }
      }

      cout << ans << endl;
   }
   return 0;
}