#include <iostream>
#include <string>

using namespace std;

int p(long long a){
    int c = 0;
    long long b = a, v = 1, x = 10;;
    while(a > 9){
        c+= 9;
        a/=10;
        v+=1*x;
        x*=10;
    }

    if(a*v <= b)
        c+=a;
    else
        c+= (a-1);
    return c;

}


int main()
{
    int t;
    long long n;
    cin >> t;
    while(t--){
        cin >> n;

        if(n < 10)
            cout << n << "\n";
        else if(n == 10)
            cout << 9 << "\n";
        else{
            cout << p(n) << "\n";
        }



    }

    return 0;
}
