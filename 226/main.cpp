#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a+b>c && a+c>b && b+c>a){
        cout << "DA" << "\n";
    }
    else{
        cout << "NE" << "\n";
    }

    return 0;
}
