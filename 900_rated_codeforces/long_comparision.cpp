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
      ll x1, p1, x2, p2;
      cin >> x1 >> p1 >> x2 >> p2;

      if (x1 == x2 && p1 == p2) {
         cout << "=" << endl;
         continue;
      }

      ll min_p = min(p1, p2);
      p1 -= min_p;
      p2 -= min_p;

      if (p1 >= 7) {
         cout << ">" << endl;
      } else if (p2 >= 7) {
         cout << "<" << endl;
      } else {
         for (int i = 0; i < p1; i++) x1 *= 10;
         for (int i = 0; i < p2; i++) x2 *= 10;

         if (x1 > x2) {
            cout << ">" << endl;
         } else if (x1 == x2) {
            cout << "=" << endl;
         } else {
            cout << "<" << endl;
         }
      }
   }
   return 0;
}