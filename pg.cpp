#include<bits/stdc++.h>
#include<iostream>

using namespace std;

inline bool prime(unsigned int x)
{
    unsigned int i, last = sqrt(x);
    for (i = 2; i <= last; i++)
    {
        if (!(x % i))
        {
            return 0;
        }
    }
    return 1;
}

void generate()
{
    for (unsigned int i = 2; i < 32000; i++)
    {
        if (prime(i))
        {
            numbers[len++] = i;
        }
    }
}


int main()
{
    while(1)
    {
        int t;
        cin >> t;
        cout << prime(t) << endl;
     }
    return 0;
}
