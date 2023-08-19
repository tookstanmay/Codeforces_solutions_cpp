#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64
#define ld long double

int main(){
   int t;
   cin>> t;

   while(t--){
      int n;
      cin>> n;

      int max_value = INT_MIN;
      ll sum = 0;
      for (int i = 0; i < n; i++){
         int x;
         cin>> x;

         max_value = max(max_value, x);
         sum += x;
      }

      cout<< fixed<< setprecision(10);
      cout<< 1.0 * (sum - max_value)/ (n - 1) + max_value<< endl;
   }
   return 0;
}