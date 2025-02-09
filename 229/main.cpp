#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if(a==0 && b>0){
        cout << "nema resenie " << endl;
    }

    else if(a>0 && b==0){
        cout << "ima beskonecno resenija " << endl;
    }

    else{
        cout << -b / a << endl;
    }

    return 0;
}
