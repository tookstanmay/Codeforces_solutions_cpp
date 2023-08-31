#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64
#define ld long double

int t;
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cin >> t;

   while (t--) {
      ll n, x;
      cin >> n >> x;

      ll sum = 0, rounded_sum = 0;
      for (int i = 0; i < n; i++) {
         int v;
         cin >> v;

         sum += v;
         rounded_sum += v / x;
         if (v % x != 0) rounded_sum++;
      }

      ll min_ans = sum / x;
      if (sum % x != 0) min_ans++;

      cout << min_ans << " " << rounded_sum << endl;
   }
   return 0;
}