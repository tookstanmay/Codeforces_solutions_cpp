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

      if (n == 1) {
         cout << 9 << endl;
      } else if (n == 2) {
         cout << 98 << endl;
      } else if (n == 3) {
         cout << 989 << endl;
      } else {
         string ansString = "9890";
         n -= 4;
         int num = 1;
         while (n != 0) {
            int digit = num % 10;
            ansString += digit + '0';
            n--;
            num++;
         }
         cout << ansString << endl;
      }
   }
   return 0;
}