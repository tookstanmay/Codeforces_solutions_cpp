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

      vector<int> arr(n);
      for (auto &x : arr) cin >> x;

      bool found = false;
      sort(arr.begin(), arr.end());
      for (int i = 1; i < n; i++) {
         if (arr[i] - arr[i - 1] > 1) found = true;
      }

      cout << (found ? "NO" : "YES") << endl;
   }
   return 0;
}