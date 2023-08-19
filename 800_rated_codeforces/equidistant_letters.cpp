#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

void solve(string str){
    int i = 0;
    int n = str.length();

    while (i < n - 1){
        char ch = str[i];
        int indx = find(str.begin() + i + 1, str.end(), ch) - str.begin();
        if (indx < n && i < n - 1){
            i++;
            swap(str[i], str[indx]);
        }
        i++;
    }
    cout<< str<< endl;
}

int main(){
    int t;
    cin>> t;

    while(t--){
        string str;
        cin>> str;

        solve(str);
    }
    return 0;
}