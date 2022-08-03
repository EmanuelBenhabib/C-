#include <bits/stdc++.h>
using namespace std;
int main ()
{
int a;
cin >> a;
bool algo = true;
while(algo) {
    cout << a << endl;
    if(a % 2 == 0) {
        a = a / 2;
    } else {
        a = (a * 3) + 1;
    }
    if(a == 1) {
        algo = false;
        cout << 1;
        return 0;
    }
}
}
