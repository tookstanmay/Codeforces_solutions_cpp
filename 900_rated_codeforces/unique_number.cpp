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

      if (n > 45) {
         cout << -1 << endl;
      } else if (n >= 1 && n <= 9) {
         cout << n << endl;
      } else if (n >= 10 && n <= 17) {
         cout << (n - 9) << 9 << endl;
      } else {
         string str = "123456789";
         string ans = "9";
         int sum = 9;
         int last = 7;
         while (last >= 0) {
            int digit = str[last] - '0';
            if (sum + digit <= n) {
               ans = str[last] + ans;
               sum += digit;
               if (sum == n) {
                  break;
               }
            }
            last--;
         }
         cout << ans << endl;
      }
   }
   return 0;
}