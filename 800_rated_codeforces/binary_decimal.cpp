#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll n;
      cin>> n;

      if (n < 10) cout<< n<< endl;
      else {
         int max_digit = INT_MIN;
         while (n != 0){
            int digit = n % 10;
            max_digit = max(max_digit, digit);
            n /= 10;
         }
         cout<< max_digit<< endl;
      }
   }
   return 0;
}