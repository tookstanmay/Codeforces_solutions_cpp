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

      vector<int> arr(n);
      int prev = 0;
      bool found = true;
      for (int i = 0; i < n; i++) {
         int x;
         cin >> x;

         arr[i] = x;
         if (x < prev) {
            found = false;
         }
         prev = arr[i];
      }

      if (found) {
         cout << 0 << endl;
      } else if (arr.front() == 1 || arr.back() == n) {
         cout << 1 << endl;
      } else if (arr.front() == n && arr.back() == 1) {
         cout << 3 << endl;
      } else {
         cout << 2 << endl;
      }
   }
   return 0;
}