#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int prostiBroevi[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97,
        101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199,
        211, 223, 227, 229, 233, 239, 241
        };
    int nzs=1;

    if(m==1){
        nzs=n;
    }
    else if(n==1){
        nzs=m;
    }
    else {
        int i=0;
        bool flag;

        while(m>1 || n>1){
            flag = false;
            if((m==1 || m%prostiBroevi[i] != 0) && (n==1 || n%prostiBroevi[i] !=0)){
                i++;
            }
            if(m>1 && m%prostiBroevi[i] ==0){
                m/=prostiBroevi[i];
                flag = true;
            }
            if(n>1 && n%prostiBroevi[i] == 0){
                n/=prostiBroevi[i];
                flag = true;
            }
            if(flag){
                nzs*=prostiBroevi[i];
            }
        }
    }

    cout << nzs << endl;

    return 0;
}
