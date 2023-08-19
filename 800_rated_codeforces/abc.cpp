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

      if (n > 2){
         cout<< "NO"<< endl;
      } else {
         if (n == 1){
            cout<< "YES"<< endl;
         } else {
            if (str[0] != str[1]){
               cout<< "YES"<< endl;
            } else {
               cout<< "NO"<< endl;
            }
         }
      }
   }
   return 0;
}