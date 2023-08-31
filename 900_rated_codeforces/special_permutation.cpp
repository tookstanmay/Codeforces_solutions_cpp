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
      int n, a, b;
      cin >> n >> a >> b;

      vector<int> arr;
      arr.push_back(a);

      for (int i = n; i >= 1; i--) {
         if (i != a && i != b) {
            arr.push_back(i);
         }
      }
      arr.push_back(b);

      int mini = *min_element(arr.begin(), arr.begin() + n / 2);
      int maxi = *max_element(arr.begin() + n / 2, arr.end());
      if (arr.size() == n && mini == a && maxi == b) {
         for (auto i : arr) {
            cout << i << " ";
         }
         cout << endl;
      } else {
         cout << (-1) << endl;
      }
   }
   return 0;
}