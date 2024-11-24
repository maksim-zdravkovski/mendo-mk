#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cifri;
    int cifra;
    int brojac=0;
    map<int, int> povtoruvanja = {
        {0, 0},
        {1, 0},
        {2, 0},
        {3, 0},
        {4, 0},
        {5, 0},
        {6, 0},
        {7, 0},
        {8, 0},
        {9, 0}
    };

    while(n > 0) {
        cifra = n % 10;
        n /= 10;
        cifri.push_back(cifra);
    }

    for(int cifra : cifri) {
        if (cifra == 6 || cifra == 9)
        {
            if (povtoruvanja[6] <= povtoruvanja[9]) {
                povtoruvanja[6] += 1;
            }
            else {
                povtoruvanja[9] += 1;
            }
        }
        else
        {
            povtoruvanja[cifra] += 1;
        }
    }

    for(auto povtoruvanje: povtoruvanja) {
        if(povtoruvanje.second > brojac) {
            brojac = povtoruvanje.second;
        }
    }

    cout << brojac << endl;

    return 0;
}

