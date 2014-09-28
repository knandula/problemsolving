/*#include <iostream>

using namespace std;


int rev(int n)
{
  int r = 0;
  while(n != 0)
  {
      r = r * 10;
      r =  r + n%10;
      n = n/10;
  }
  return r;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n1,n2;
        cin >> n1 >> n2;
        cout << rev(rev(n1) + rev(n2)) << endl;
    }
    return 0;
}
*/
