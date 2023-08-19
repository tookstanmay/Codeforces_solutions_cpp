#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

void solve(string str){
    char maxChar = 'a';
    deque<char> dq;
    for (auto i: str){
        maxChar = max(maxChar, i);
        dq.push_back(i);
    }

    bool check = true;
    for (char ch = maxChar; ch >= 'a'; ch--){
        if (dq.empty()){
            cout<< "NO"<< endl;
            return;
        }
        if (ch == dq.front()){
            dq.pop_front();
        } else if (ch == dq.back()){
            dq.pop_back();
        } else {
            cout<< "NO"<< endl;
            return;
        }
    }

    if (dq.empty()){
        cout<< "YES"<< endl;
    } else {
        cout<< "NO"<< endl;
    }
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