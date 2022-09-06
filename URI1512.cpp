#include <iostream>
#include "inout.h"
using namespace std;

long gcd(long a, long b)
{
    if (b==0)return a;
    return gcd(b, a % b);   
}

int main()
{
    io();
    long long x, y, z;
    long long counter = 0;
    while (std::cin >> x >> y >> z)
    {   
        long long l;
        if (x == 0 && y == 0 && z == 0)
        {
            break;
        }
        else
        {
            long long lcm = (y*z)/gcd(y,z);
            l = (x/y)+(x/z)-(x/lcm);
        }
        std::cout << l << std::endl;
        counter = 0;
    }
    return 0;
}