#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    if( a>=b && a>=c)
        cout<<a<<" is the largest number";
    else if (b>=a&& b>=c)
        cout<<b<<" is the largest number.";
    else
        cout<<c<<" is the largest number.";
    return 0;
}