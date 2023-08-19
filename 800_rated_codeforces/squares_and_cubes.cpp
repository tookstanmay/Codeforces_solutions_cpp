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

      ll i = 1, j = 1;
      set<ll> unique;
      while (i * i <= n){
         unique.insert(i * i);
         i++;
      }

      while (j * j * j <= n){
         unique.insert(j * j * j);
         j++;
      }

      cout<< unique.size()<< endl;
   }
   return 0;
}