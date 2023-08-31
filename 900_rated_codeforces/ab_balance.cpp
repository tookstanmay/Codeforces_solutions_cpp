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
      string str;
      cin >> str;

      if (str.front() != str.back()) str.back() = str.front();
      cout << str << endl;
   }
   return 0;
}