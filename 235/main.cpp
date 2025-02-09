#include <iostream>

using namespace std;

int main(
)
{
    int k;
    cin >> k;
    int zbir=0;
    for(int i=0; i < k; i++){
        zbir += i * 3 + 1 ;
    }
    cout << zbir << endl;


    return 0;
}
