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

      vector<int> arr(n);
      vector<int> brr(n);

      for (auto &x: arr) cin>> x;
      for (auto &y: brr) cin>> y;

      for (int i = 0; i < n; i++){
         if (arr[i] < brr[i]){
            swap(arr[i], brr[i]);
         }
      }

      int max_a = *max_element(arr.begin(), arr.end());
      int max_b = *max_element(brr.begin(), brr.end());

      cout<< (max_a * max_b)<< endl;
   }
   return 0;
}