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

      int len = 2 * n;
      for (int i = 1; i <= n; i++){
         int open_count = i;
         int close_count = 0;
         string temp = "";
         for (int j = 0; j < open_count; j++){
            temp += "(";
         }

         while (close_count != open_count){
            temp += ")";
            close_count++;
         }

         while (temp.length() < len){
            temp += "()";
         }

         cout<< temp<< endl;
      }
   }
   return 0;
}