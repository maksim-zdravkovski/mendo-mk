#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n % 2 == 0 ){
       cout << "PAREN " << "\n";
    }
    else {
        cout << "NEPAREN " << "\n";
    }

    return 0;
}
