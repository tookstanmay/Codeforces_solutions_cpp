#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      string S, T;
      cin>> S>> T;

      int a_count = count(S.begin(), S.end(), 'a');
      int b_count = count(S.begin(), S.end(), 'b');
      int c_count = count(S.begin(), S.end(), 'c');

      stable_sort(S.begin(), S.end());
      if (a_count == 0 || b_count == 0 || c_count == 0 || T != "abc"){
         cout<< S<< endl;
      } else {
         for (int i = 0; i < a_count; i++){
            cout<< 'a';
         }
         for (int i = 0; i < c_count; i++){
            cout<< 'c';
         }
         for (int i = 0; i < b_count; i++){
            cout<< 'b';
         }
         
         int indx = a_count + b_count + c_count;
         for (int i = indx; i < S.size(); i++){
            cout<< S[i];
         }
         cout<< endl;
      }
   }
   return 0;
}