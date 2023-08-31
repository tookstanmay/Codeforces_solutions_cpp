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
      ll m, n;
      cin >> m >> n;

      if (n % 4 == 0)
         cout << m << endl;
      else if (m % 2 == 0) {
         int remain = n % 4;
         if (remain == 1) {
            cout << (m - n) << endl;
         } else if (remain == 2) {
            cout << (m - (n - 1) + n) << endl;
         } else {
            cout << (m - (n - 2) + (n - 1) + n) << endl;
         }
      } else {
         int remain = n % 4;
         if (remain == 1) {
            cout << (m + n) << endl;
         } else if (remain == 2) {
            cout << (m + (n - 1) - n) << endl;
         } else {
            cout << (m + (n - 2) - (n - 1) - n) << endl;
         }
      }
   }
   return 0;
}