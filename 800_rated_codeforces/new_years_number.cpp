# include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while (t--){
        int n;
        cin>> n;

        if (n < 2020){
            cout<< "NO"<< endl;
        } else {
            if ((n % 2020 == 0) || (n % 2021 == 0)){
                cout<< "YES"<< endl;
            } else {
                int remain = n / 2020;
                int i = remain - 1;
                int j = 1;

                bool found = false;
                while (j < remain){
                    int checkValue = (2020 * i) + (2021 * j);
                    if (checkValue == n){
                        found = true;
                        break;
                    }
                    i--; j++;
                }

                if (found){
                    cout<< "YES"<< endl;
                } else {
                    cout<< "NO"<< endl;
                }
            }
        }
    }
    return 0;
}