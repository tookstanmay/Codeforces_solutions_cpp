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

      vector<int> arr;
      ll zeroes_cnt = 0, ones_cnt = 0;
      for (int i = 0; i < n; i++) {
         int x;
         cin >> x;

         arr.push_back(x);

         if (x == 0) {
            zeroes_cnt++;
         } else if (x == 1) {
            ones_cnt++;
         }
      }

      if (!ones_cnt) {
         cout << 0 << endl;
      } else {
         if (!zeroes_cnt) {
            cout << ones_cnt << endl;
         } else {
            zeroes_cnt = pow(2, zeroes_cnt);
            cout << (ones_cnt * zeroes_cnt) << endl;
         }
      }
   }
   return 0;
}