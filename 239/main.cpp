#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int zbir=0;
    int dek=1;
    while(n / dek > 0){
        zbir += n / dek % 10;
        dek *= 10;
    }
    cout << zbir << endl;


    return 0;
}
