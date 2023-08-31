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
      int n;
      cin >> n;

      vector<int> arr(n);
      for (auto &x : arr) cin >> x;

      int cnt = 0;
      ll max_sum = 0;
      for (int i = 0; i < n; i++) {
         while (arr[i] % 2 == 0) {
            arr[i] /= 2;
            cnt++;
         }
      }

      sort(arr.begin(), arr.end());
      int max_value = arr.back();
      max_sum += accumulate(arr.begin(), arr.end() - 1, 0);

      max_sum += max_value * pow(2, cnt);
      cout << max_sum << endl;
   }
   return 0;
}