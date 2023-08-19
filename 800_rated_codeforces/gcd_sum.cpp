#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int gcd_sum(ll num) {
   ll temp = num;
   ll digit_sum = 0;
   while (temp != 0) {
      int digit = temp % 10;
      digit_sum += digit;
      temp /= 10;
   }

   return __gcd(num, digit_sum);
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      ll n;
      cin >> n;

      if (gcd_sum(n) != 1)
         cout << (n) << endl;
      else if (gcd_sum(n + 1) != 1)
         cout << (n + 1) << endl;
      else if (gcd_sum(n + 2) != 1)
         cout << (n + 2) << endl;
   }
   return 0;
}