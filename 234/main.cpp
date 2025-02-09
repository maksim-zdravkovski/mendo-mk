#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int niza[10];
    for(int i=0; i < n; i++){
        cin >> niza[i];
    }
    int zbir=0;
    for(int i=0; i < n; i++){
        zbir += niza[i];
    }
    cout << zbir << endl;


    return 0;
}
