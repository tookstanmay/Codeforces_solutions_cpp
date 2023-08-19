#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int main() {
   int t;
   cin >> t;

   while (t--) {
      int n, m, k;
      cin >> n >> m >> k;

      int possible_ans = (m - 1) + m * (n - 1);
      cout << (possible_ans == k ? "YES" : "NO") << endl;
   }
   return 0;
}