#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

bool isSafe(string &row_1, int i, int n){
   if (i > 0 && row_1[i - 1] == '1'){
      row_1[i - 1] = '2';
      return true;
   } else if (i < n - 1 && row_1[i + 1] == '1'){
      row_1[i + 1] = '2';
      return true;
   }

   return false;
}

int main(){
   int t;
   cin>> t;

   while(t--){
      int n;
      cin>> n;

      string row_1, row_2;
      cin>> row_1;
      cin>> row_2;

      int count = 0;
      for (int i = 0; i < n; i++){
         if (row_2[i] == '1'){
            if (row_1[i] == '0'){
               count++;
               row_1[i] = '2';
            }
            else if (isSafe(row_1, i, n)){
               count++;
            }
         }
      }

      cout<< count<< endl;
   }
   return 0;
}