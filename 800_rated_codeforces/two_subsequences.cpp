#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int main(){
   int t;
   cin >> t;

   while (t--){
      string str;
      cin >> str;

      int min_index = min_element(str.begin(), str.end()) - str.begin();

      cout << str[min_index] << " ";
      for (int i = 0; i < str.length(); i++){
         if (i != min_index) cout<< str[i];
      }
      cout<< endl;
   }
   return 0;
}