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

        string str;
        cin>> str;

        string copied = str;
        sort(copied.begin(), copied.end());

        int count = 0;
        for (int i = 0; i < str.length(); i++){
            if (str[i] != copied[i]) count++;
        }

        cout<< count<< endl;
    }
    return 0;
}