#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    string o;
    if(a+b==c){
        o="+";
    }
    else if(a-b==c){
        o="-";
    }
    else if(a/b==c){
        o="/";
    }
    else{
        o="*";
    }

    cout << a << o << b << "=" << c << "\n";

    return 0;
}
