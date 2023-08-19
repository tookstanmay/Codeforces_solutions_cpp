#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

void solve(ll w, ll h, ll n){
   if (n == 1){
      cout<< "YES"<< endl;
      return;
   }
   if (w % 2 == 1 && h % 2 == 1 && n > 1){
      cout<< "NO"<< endl;
      return;
   }
   ll count = 1;
   while (h % 2 == 0){
      h /= 2;
      count *= 2;
   }
   while (w % 2 == 0){
      w /= 2;
      count *= 2;
   }
   
   if (count >= n) cout<< "YES"<< endl;
   else cout<< "NO"<< endl;
}

int main(){
   int t;
   cin>> t;

   while(t--){
      ll w, h, n;
      cin>> w>> h>> n;

      solve(w, h, n);

   }

   return 0;
}