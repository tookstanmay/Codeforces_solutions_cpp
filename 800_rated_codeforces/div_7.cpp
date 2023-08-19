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

      if (n % 7 == 0){
         cout<< n<< endl;
      } else {
         n /= 10;
         n *= 10;

         if (n % 7 == 0){
            cout<< n<< endl;
         } else {
            for (int i = 1; i < 10; i++){
               int k = n + i;
               if (k % 7 == 0){
                  cout<< k<< endl;
                  break;
               }
            }
         }
      }
   }
   return 0;
}