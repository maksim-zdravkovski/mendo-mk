#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int brojac = 1;
    int dek = 10;

    while(n / dek >= 1){
        brojac++;
        dek*=10;
    }

    cout << brojac << endl;

    return 0;
}
