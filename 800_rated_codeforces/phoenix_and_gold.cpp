#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int main(){
   int t;
   cin>> t;

   while(t--){
      int n, x;
      cin>> n>> x;

      ll sum = 0;
      vector<int> arr(n);
      for (int i = 0; i < n; i++){
         cin>> arr[i];
         sum += arr[i];
      }
      
      if (sum == x){
         cout<< "NO"<< endl;
      } else {
         cout<< "YES"<< endl;
         for (int i = 0; i < n; i++){
            if (x == arr[i]){
               swap(arr[i], arr[i + 1]);
            }
            cout<< arr[i]<< " ";
            x -= arr[i];
         }  cout<< endl;
      }
      
   }
   return 0;
}