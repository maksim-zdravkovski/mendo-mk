#include <bits/stdc++.h>

using namespace std;

int main()
{
    //vnesuvanje pocetok

    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> poraki;
    for(int i=0; i<k; i++){
        int a, b;
        cin >> a >> b;
        poraki.push_back(make_pair(a, b));
    }

    int brojac=0;

    //vnesvanje kraj

    //algoritam pocetok
    for(auto par : poraki){
        int f,s;
        bool najdeno=false;
        f=par.first;
        s=par.second;
        for(auto par2 : poraki){
            if(f==par2.second && s==par2.first){
                najdeno=true;
                break;
            }
        }
        if(najdeno==false){
            brojac++;
        }
    }
    //algoritam kraj


    //pecatenje pocetok
    cout << brojac << endl;
    //pecatenje kraj

    return 0;
}
