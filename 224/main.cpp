#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;

    if(k/100==0){
        return -1;
    }
    cout << (k-k/100*100)/10 << endl;

    return 0;
}
