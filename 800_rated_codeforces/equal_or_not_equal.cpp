#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      string str;
      cin>> str;

      cout<< (count(str.begin(), str.end(), 'N') == 1? "NO": "YES")<< endl;
   }
   return 0;
}