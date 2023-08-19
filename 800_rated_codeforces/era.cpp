#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      int n;
      cin>> n;

      ll diff = INT_MIN;
      for (int i = 1; i <= n; i++){
         ll x;
         cin>> x;

         diff = max(diff, x - i);
      }

      cout<< diff<< endl;
   }
   return 0;
}