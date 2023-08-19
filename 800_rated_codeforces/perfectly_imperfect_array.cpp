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

      int cnt = 0;
      vector<int> arr(n);
      for (int i = 0; i < n; i++){
         int x;
         cin>> x;

         arr[i] = x;
         double square_root = sqrt(x);
         if (square_root == int(square_root)) cnt++;
      }
      
      cout<< (cnt == n? "NO": "YES")<< endl;
   }
   return 0;
}