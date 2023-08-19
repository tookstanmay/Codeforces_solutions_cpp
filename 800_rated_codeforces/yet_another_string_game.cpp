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

      int alice_start = 0, bob_start = 1;
      for (; alice_start < n; alice_start += 2){
         if (str[alice_start] == 'a'){
            str[alice_start] = 'b';
         } else {
            str[alice_start] = 'a';
         }
      }

      for (; bob_start < n; bob_start += 2){
         if (str[bob_start] == 'z'){
            str[bob_start] = 'y';
         } else {
            str[bob_start] = 'z';
         }
      }

      cout<< str<< endl;
   }
   return 0;
}