#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int main(){
   int t;
   cin>> t;

   while(t--){
      int k;
      cin>> k;

      if (k == 100){
         cout<< 1<< endl;
      } else {
         int magic_essence = k, water = 100 - k;
         int gcd = __gcd(magic_essence, water);
         magic_essence /= gcd;
         water /= gcd;

         cout<< (magic_essence + water)<< endl;
      }
   }
   return 0;
}