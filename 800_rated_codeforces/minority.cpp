#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      string str;
      cin>> str;

      int n = str.length();
      if (n == 1){
         cout<< 0<< endl;
      } else {
         int zeroes_count = 0, ones_count = 0;
         for (int i = 0; i < n; i++){
            if (str[i] == '0') zeroes_count++;
            else ones_count++;
         }

         if (zeroes_count != ones_count) cout<< min(zeroes_count, ones_count)<< endl;
         else cout<< zeroes_count - 1<< endl;
      }
   }
   return 0;
}