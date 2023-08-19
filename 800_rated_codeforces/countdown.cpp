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

      string str;
      cin>> str;

      int sum = 0;
      int non_zero_count = 0;
      for (int i = 0; i < str.length(); i++){
         if (str[i] != '0'){
            non_zero_count++;
         }
         sum += str[i] - '0';
      }

      ll ans = sum + non_zero_count;
      if (str.back() != '0') --ans;

      cout<< ans<< endl;
   }
   return 0;
}