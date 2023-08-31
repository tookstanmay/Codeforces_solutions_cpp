#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int t;
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   cin >> t;

   while (t--) {
      ll n, m;
      cin >> n >> m;

      if (n == 1 && m == 1) {
         cout << 0 << endl;
      } else if (min(n, m) == 1) {
         cout << 1 << endl;
      } else {
         cout << 2 << endl;
      }
   }
   return 0;
}