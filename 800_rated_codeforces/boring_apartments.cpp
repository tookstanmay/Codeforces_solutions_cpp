#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      int x;
      cin>> x;

      ll initial_sum = 0, digit_sum = 0;
      int digit = 0;
      int count = 1;
      while (x != 0){
         digit = x % 10;
         x /= 10;
         digit_sum += count;  
         count++;
      }

      initial_sum = 10 * (digit - 1);
      cout<< (initial_sum + digit_sum)<< endl;
   }
   return 0;
}