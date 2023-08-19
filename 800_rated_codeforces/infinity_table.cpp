#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned __int64

int main(){
    int t;
    cin>> t;

    while(t--){
        ll k;
        cin>> k;

        ll ansR = 0, ansC = 0;
        ld n = ceil(sqrt(k));

        ll diff = (n * n) - k;
        
        if (diff < n){ // i.e, lie in same row
            ansR = n;
            ansC = diff + 1;
        } else { // lie in different row
            ansC = n;
            ansR = n - (diff - n) - 1;
        }

        cout<< ansR<< " "<< ansC<< endl;
    }
    return 0;
}