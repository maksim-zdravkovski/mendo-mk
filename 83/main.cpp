#include <iostream>

using namespace std;

int main()
{
    int px, py, a, b;
    cin >> px >> py >> a >> b;

    int tx, ty;
    cin >> tx >> ty;

    if(tx>px && tx<px+a && ty>py && ty<py+b) {
        cout << "vnatre" << "\n";
    }
    /*
    else if (tx == px && ty == py) {
        cout << "strana" << "\n";
    }
    else if(tx == px+a && ty = py+b) {
        cout << "strana" << "\n";
    }
    else if(tx == px && ty = py+b) {
        cout << "strana" << "\n";
    }
    else if(tx == px+a && ty = py) {
        cout << "strana" << "\n";
    }
    */
    else if(tx>=px && tx<=px+a && ty>=py && ty<=py+b) {
        cout << "strana" << "\n";
    }
    else {
        cout << "nadvor" << "\n";
    }

    return 0;
}
