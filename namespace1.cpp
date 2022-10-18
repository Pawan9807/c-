#include<iostream>
using namespace std;

namespace f
{
    int value()
    {
        return 5;

    }
}
namespace b
{
    const double pi=3.1416;
    double value()
    {
        return 2*pi;
    }
}
int main()
{
    cout<<f::value()<<'\n';
    cout<<b::value()<<'\n';
    cout<<b::pi<<'\n';
    return 0;
}