#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll a,  b;
      cin>> a>> b;

      if (b > a) swap(a, b);

      if (a == b) cout<< (a + b)/ 4<< endl;
      else {
         ll diff_pairs = a - b;
         a = b;
         diff_pairs /= 2;
         diff_pairs = min(a, diff_pairs);
         a -= diff_pairs;
         b = a;
         diff_pairs += (a + b)/ 4;
         cout<< diff_pairs<< endl;
      }
   }
   return 0;
}