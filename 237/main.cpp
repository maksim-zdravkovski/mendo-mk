#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=1;
    int proizvod=1;
    while(i <= n){
        proizvod*=i;
        i++;
    }

    cout << proizvod << endl;

    return 0;
}
