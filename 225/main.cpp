#include <iostream>

using namespace std;

int main()
{
    int k, l;
    cin >> k >> l;



    int kS = (k/10)%10;
    int lS = (l/10)%10;

    int zbir = kS + lS;

    cout << zbir << endl;

    return 0;
}
