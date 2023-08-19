#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int main() {
   int t;
   cin >> t;

   while (t--) {
      int n;
      cin >> n;

      bool found = false;
      for (int i = 0; i < n; i++) {
         int x;
         cin >> x;

         if (x < 0) {
            found = true;
         }
      }

      if (found) {
         cout << "NO" << endl;
      } else {
         cout << "YES" << endl;
         cout << 101 << endl;
         for (int i = 0; i <= 100; i++) {
            cout << i << " ";
         }
         cout << endl;
      }
   }
   return 0;
}