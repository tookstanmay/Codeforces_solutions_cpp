#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      int n, k;
      cin>> n>> k;

      vector<int> arr(n);
      for (auto &x: arr) cin>> x;

      int start = 0;
      while (k > 0 && start < n - 1){
         if (arr[start] < k){
            k -= arr[start];
            arr[n - 1] += arr[start];
            arr[start] = 0;
         } else {
            arr[start] -= k;
            arr[n - 1] += k;
            k = 0;
         }
         start++;
      }

      for (auto i: arr){
         cout<< i<< " ";
      }  cout<< endl;
   }
   return 0;
}