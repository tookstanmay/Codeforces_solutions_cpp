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

      vector<ll> arr(n);
      for (auto &x: arr) cin>> x;

      int i = 0, j = n - 1;
      while (i <= j){
         if (i == j){
            cout<< arr[i];
            break;
         }
         cout<< arr[i]<< " "<< arr[j]<<" ";
         i++; j--;
      }  cout<< endl;
   }
   return 0;
}