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

      if (n % 2 == 0){
         cout<< 0<< endl;
      } else {
         string str = to_string(n);
         if ((str[0] - '0') % 2 == 0){
            cout<< 1<< endl;
         } else {
            bool is_even_present = false;
            while (n != 0){
               int digit = n % 10;
               if (digit % 2 == 0){
                  is_even_present = true;
                  break;
               }
               n /= 10;
            }
            if (is_even_present){
               cout<< 2<< endl;
            } else {
               cout<< -1<< endl;
            }
         }
      }
   }
   return 0;
}