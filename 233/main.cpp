#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=1;
    int zbir=0;

    while(i <= n){
        zbir+=i;
        i++;
    }

    cout << zbir << endl;

    return 0;
}
