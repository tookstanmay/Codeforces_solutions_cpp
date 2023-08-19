#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

void solve(ll l, ll r, ll k){
   ll odds = 0;
   if (l == r && l > 1){
      cout<< "YES"<< endl;
      return;
   }
   // both ends are odd
   if (r % 2 == 1 && l % 2 == 1){
      odds = ((r - l + 1)/ 2) + 1;
   } 
   // both ends are even
   else if (r % 2 == 0 && l % 2 == 0){
      odds = (r - l + 1)/ 2;
   } else {
      odds = (r - l + 1)/ 2;
   }
   if (odds <= k) cout<< "YES"<< endl;
   else cout<< "NO"<< endl;

}

int main(){
   int t;
   cin>> t;

   while(t--){
      ll l, r, k;
      cin>> l>> r>> k;

      solve(l, r, k);
   }
   return 0;
}