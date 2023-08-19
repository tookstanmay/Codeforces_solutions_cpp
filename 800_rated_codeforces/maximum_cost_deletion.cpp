# include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while (t--){
        int n, a, b;
        cin>> n>> a>> b;

        string str;
        cin>> str;

    int m = unique(str.begin(), str.end()) - str.begin();
    cout << n * a + max(n * b, (m / 2 + 1) * b) << '\n'; 
    }
    return 0;
}