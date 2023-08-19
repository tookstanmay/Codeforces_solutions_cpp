#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

bool isPalindrome(string str){
   int i = 0, j = str.length() - 1;
   while (i < j){
      if (str[i] != str[j]) return false;
      i++; j--;
   }
   return true;
}

int main(){
   int t;
   cin>> t;

   while(t--){
      string str;
      cin>> str;

      int count_a = count(str.begin(), str.end(), 'a');
      if (count_a == str.length() || str.length() == 0) cout<< "NO"<< endl;
      else {
         if (!isPalindrome(str + 'a')){
            cout<< "YES"<< endl<< str + 'a';
         } else if (!isPalindrome('a' + str)){
            cout<< "YES"<< endl<< 'a' + str;
         } else {
            cout<< "NO";
         }  cout<< endl;
      }
   }
   return 0;
}