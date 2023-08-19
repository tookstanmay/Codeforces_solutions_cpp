#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int main() {
   int n, q;
   cin >> n >> q;

   string str;
   cin >> str;

   vector<int> char_count(n, 0);
   char_count[0] = str[0] - 'a' + 1;
   for (int i = 1; i < n; i++) {
      char_count[i] = char_count[i - 1] + str[i] - 'a' + 1;
   }

   for (int i = 0; i < q; i++) {
      int x, y;
      cin >> x >> y;

      --x;
      --y;

      cout << (x > 0 ? char_count[y] - char_count[x - 1] : char_count[y])
           << endl;
   }

   return 0;
}