# include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>> t;

    while (t--){
        vector<int> plyr(4);

        for (int i= 0; i < 4; i++){ cin>> plyr[i]; }

        int fnl1 = max(plyr[0], plyr[1]);
        int fnl2 = max(plyr[2], plyr[3]);

        sort(plyr.begin(), plyr.end());

        if (fnl1 > fnl2){
            if (fnl2 == plyr[2]){
                cout<< "YES"<< endl;
            } else{
                cout<< "NO"<< endl;
            }
        } else {
            if (fnl1 == plyr[2]){
                cout<< "YES"<< endl;
            } else {
                cout<< "NO"<< endl;
            }
        }
    }
    return 0;
}