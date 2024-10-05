#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;

    cin >> n;

    if (n > 100000000) {
        return -1;
    }

    int i = 1;
    int power = 1;
    int counter = 0;

    while (power < n) {
        counter++;

        power = pow((i+1), 2);
        i++;
    }
    
    cout << counter;

    return 0;
}