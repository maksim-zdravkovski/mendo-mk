#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a<0 || b<0 || c<0 || a>500 || b>500 || c>500){
        return -1;
    }

    int maks, minn, middle;
    if(a>b && a>c){
        maks=a;
        if(b>c){
            middle=b;
            minn=c;
        }
        else{
            middle=c;
            minn=b;
        }
    }
    else if(b>a && b>c){
        maks=b;
        if(a>c){
            middle=a;
            minn=c;
        }
        else{
            middle=c;
            minn=a;
        }
    }
    else{
        maks=c;
        if(b>a){
            middle=b;
            minn=a;
        }
        else{
            middle=a;
            minn=b;
        }
    }

    cout << minn << " " << middle << " " << maks << "\n";

    return 0;
}
