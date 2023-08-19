#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ull n;
      cin>> n;

      if (n % 2050 != 0){
         cout<< -1<< endl;
      } else {
         ull new_number = n/ 2050;
         int sum = 0;
         while (new_number != 0){
            int digit = new_number % 10;
            sum += digit;
            new_number /= 10;
         }
         cout<< sum<< endl;
      }
   }
   return 0;
}