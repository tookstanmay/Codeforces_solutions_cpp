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

      vector<int> arr(n + 1, 0);
      for (int i = 1; i <= n; i++){
         int x;
         cin>> x;

         arr[x]++;
      }

      int max_value = *max_element(arr.begin(), arr.end());
      cout<< max_value<< endl;
   }  
   return 0;
}