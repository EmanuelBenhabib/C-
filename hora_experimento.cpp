#include <iostream>

using namespace std;

int main()
{
    int m, s, d, r;
    cin>>r;
    cin>>m;
    cin>>s;
    cin>>d;
    r=r*3600+m*60+s+d;
    r=r%86400;
    s=r%60;
    r=(r-s)/60;
    m=r%60;
    r=(r-m)/60;
    cout<<r<<' '<<m<<' '<<s<<endl;
    return 0;
}