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

      ll sum = 0;
      for (int i = 0; i < n; i++){
         int x;
         cin>> x;

         sum += x;
      }

      int possible_heights = sum/ n;
      ll possible_sum = possible_heights * n;

      if (possible_sum == sum){
         cout<< 0<< endl;
      } else {
         cout<< 1<< endl;
      }
   }
   return 0;
}