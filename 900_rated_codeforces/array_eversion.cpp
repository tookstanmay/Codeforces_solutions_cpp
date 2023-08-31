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

      int max_value = *max_element(arr.begin(), arr.end());
      if (arr.back() == max_value) {
         cout << 0 << endl;
         continue;
      }

      vector<int> barr;
      barr.push_back(arr.back());
      for (int i = n - 2; i >= 0; i--) {
         if (arr[i] == max_value) {
            break;
         }
         int value = barr.back();
         barr.push_back(max(value, arr[i]));
      }

      int count = 0;
      unordered_set<int> st;
      for (int i = 0; i < barr.size(); i++) {
         st.insert(barr[i]);
      }
      cout << st.size() << endl;
   }
   return 0;
}