#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
    int t;
    cin>> t;

    while (t--){
        int xa, ya, xb, yb, xf, yf;
        cin>> xa>> ya;
        cin>> xb>> yb;
        cin>> xf>> yf;

        int totalDist = abs(xa - xb) + abs(ya - yb);

        if ((xa == xb && xa == xf && yf > min(ya, yb) && yf < max(ya, yb)) || (ya == yb && ya == yf && xf > min(xa, xb) && xf < max(xa, xb))){
            totalDist += 2;
        }
        cout<< totalDist<< endl;
    }
    return 0;
}