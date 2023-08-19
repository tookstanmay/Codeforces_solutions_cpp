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

      string res = "";
      for (int i = 0; i < n; i++){
         char ch = str[i];
         if (ch == 'L' || ch == 'R'){
            res += ch;
         } else if (ch == 'U'){
            res += 'D';
         } else{
            res += 'U';
         }
      }

      cout<< res<< endl;
   }
   return 0;
}