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

      int odd_count = 0, even_count = 0;
      for (int i = 0; i < 2 * n; i++){
         int x;
         cin>> x;

         if (x % 2 == 1) odd_count++;
         else even_count++;
      }

      if (odd_count == even_count) cout<< "Yes"<< endl;
      else cout<< "No"<< endl;
   }
   return 0;
}