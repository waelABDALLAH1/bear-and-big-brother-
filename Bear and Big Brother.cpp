#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int s=0;
    while(a<=b)
    {
        s++;
        a=3*a;
        b=2*b;
    }
    cout<<s;
    return 0;
}
