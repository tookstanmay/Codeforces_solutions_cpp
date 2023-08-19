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
      vector<int> barr(n);

      for (auto &x: arr) cin>> x;
      for (auto &y: barr) cin>> y;

      // getting sum of both arrays
      int sum_arr = accumulate(arr.begin(), arr.end(), 0);
      int sum_barr = accumulate(barr.begin(), barr.end(), 0);

      // if sum aren't equals, then it is never possible to make their elements equal
      if (sum_arr != sum_barr){
         cout<< (-1)<< endl;
      } else {
         // storing the increments and decrements in arrays as indices, based 1
         vector<int> inc, dec;
         for (int i = 0; i < n; i++){

            // there's strictly increments, then we've to increment the arr[i] by such amounts, so that it becomes equal to barr[i]
            // and that is strictly equal to their difference of values
            if (arr[i] < barr[i]){
               int inc_diff = barr[i] - arr[i];
               for (int j = 0; j < inc_diff; j++){
                  inc.push_back(i + 1);   
               }
            }

            // similarly as mentioned above, if there's any decrement then store their difference
            if (arr[i] > barr[i]){
               int dec_diff = arr[i] - barr[i];
               for (int j = 0; j < dec_diff; j++){
                  dec.push_back(i + 1);
               }
            }
         }
         cout<< inc.size()<< endl;
         for (int k = 0; k < inc.size(); k++){
            cout<< dec[k]<< " "<< inc[k]<< endl;
         }
      }
      
   }
   return 0;
}