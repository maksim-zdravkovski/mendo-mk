#include <iostream>

using namespace std;

int main()
{
    char bukva;
    cin >> bukva;

    if(bukva >= 'a' && bukva <= 'z'){
        cout << "MALA" << endl;
    }
    else if(bukva >= 'A' && bukva <= 'Z'){
        cout << "GOLEMA" << endl;
    }
    else{
        cout << "GRESKA" << endl;
    }
    return 0;
}
