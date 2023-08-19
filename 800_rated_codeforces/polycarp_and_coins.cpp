# include<bits/stdc++.h>
# define ll long long int
using namespace std;

int main(){
    
    int t;
    cin>> t;

    while (t--){
        ll n;
        cin>> n;

        ll c1 = 0, c2 = 0;
        c1 = n/ 3;
        c2 = (n - c1)/ 2;

        if (c1 + (2 * c2) == n){
            cout<< c1<< " "<< c2<< endl;
        } else {
            ll addC1 = n - (c1 + (2 * c2));
            c1 += addC1;

            cout<< c1<< " "<< c2<< endl;
        }
    }

    return 0;
}