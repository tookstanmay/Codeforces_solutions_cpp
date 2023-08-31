#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int t;
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cin >> t;

   while (t--) {
      int n;
      cin >> n;

      vector<ll> arr(n);
      for (auto &x : arr) cin >> x;

      ll sum = 0, req_sum = 0;
      bool found = false;
      for (int i = 0; i < n; i++) {
         sum += arr[i];
         req_sum += i;

         if (sum < req_sum) {
            found = true;
            break;
         }
      }
      if (found) {
         cout << "NO" << endl;
      } else {
         cout << "YES" << endl;
      }
   }
   return 0;
}