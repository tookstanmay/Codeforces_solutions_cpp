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

      string str;
      cin >> str;

      string str_1 = str;
      string str_2 = str;

      bool color = false;  // starting with 'R'
      // true-> blue
      // false-> red
      for (int i = 0; i < n; i++) {
         if (str_1[i] == '?' && color) {
            str_1[i] = 'B';
         } else if (str_1[i] == '?' && !color) {
            str_1[i] = 'R';
         }

         if (str_1[i] == 'R') {
            color = true;
         } else {
            color = false;
         }
      }

      color = true;  // starting with 'B'
      // true-> blue
      // false-> red
      for (int i = 0; i < n; i++) {
         if (str_2[i] == '?' && color) {
            str_2[i] = 'B';
         } else if (str_2[i] == '?' && !color) {
            str_2[i] = 'R';
         }

         if (str_2[i] == 'R') {
            color = true;
         } else {
            color = false;
         }
      }

      // count imperfectness
      int count_1 = 0, count_2 = 0;
      for (int i = 1; i < n; i++) {
         if (str_1[i] == str_1[i - 1]) count_1++;
         if (str_2[i] == str_2[i - 1]) count_2++;
      }

      // cout << str_1 << " " << str_2 << endl;
      // cout << count_1 << " " << count_2 << endl;
      if (count_1 > count_2)
         cout << str_2 << endl;
      else
         cout << str_1 << endl;
   }
   return 0;
}