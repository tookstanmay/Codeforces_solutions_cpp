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
      ll n;
      cin >> n;

      if (n % 2 == 0) {
         cout << 2 << " " << (n - 3) << " "
              << "1\n";
      } else {
         ll curr = (n - 1) / 2;
         if (curr % 2 == 0) {
            cout << curr - 1 << " " << curr + 1 << " 1\n";
         } else {
            cout << curr - 2 << " " << curr + 2 << " 1\n";
         }
      }
   }
   return 0;
}