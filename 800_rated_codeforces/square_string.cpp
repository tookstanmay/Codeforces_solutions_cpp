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
      if (n % 2 == 1){
         cout<< "NO"<< endl;
      } else {
         int i = 0, j = n/ 2;
         bool found = true;

         while (j < n){
            if (str[i] != str[j]){
               found = false;
               break;
            }
            i++; j++;
         }

         if (found) cout<< "YES"<< endl;
         else cout<< "NO"<< endl;
      }
   }
   return 0;
}