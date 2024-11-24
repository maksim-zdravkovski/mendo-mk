#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=2;
    vector<pair<int,int>> fakt;
    int brojac = 0;
    if(n==1){
        fakt.push_back(make_pair(1, 1));
    }
    else {
        while(n>1) {
            if(n%i!=0){
                if (brojac > 0) {
                    fakt.push_back(make_pair(i, brojac));
                    brojac = 0;
                }
                i++;
            }
            else{
                brojac++;
                n/=i;
            }
        }
    }

    fakt.push_back(make_pair(i, brojac));

    string izlez = "";
    for(int i = 0; i < fakt.size(); i++) {
        izlez= izlez + "(" + to_string(fakt[i].first) + "^" + to_string(fakt[i].second) + ")";
        if (i < fakt.size() - 1) {
            izlez+="*";
        }
    }
    cout << izlez;

    return 0;
}
