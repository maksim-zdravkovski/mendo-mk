#include <iostream>

using namespace std;

int main()
{
    int n, fb1,fb2,fb3;
    cin >> n;
    fb1=1;
    fb2=1;
    cout << fb1 << endl;

    while(n >= fb3){
        cout << fb2 << endl;
        fb3 = fb1+fb2;
        fb1 = fb2;
        fb2 = fb3;
    }
    return 0;
}
