# include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main(){
    
    int t;
    cin>> t;

    while (t--){
        ll n;
        cin>> n;

        if (n & (n - 1)){
            cout<< "YES"<< endl;
        }   else {
            cout<< "NO"<< endl;
        }
    }

    return 0;
}