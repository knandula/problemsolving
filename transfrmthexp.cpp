/*#include<bits/stdc++.h>
#include<iostream>
#include<stack>

using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        stack<char> symStack;
        string exp;
        cin >> exp ;
        string result;

        for(int i=0;i<=exp.size();i++)
        {
            if(isalpha(exp[i]))
             cout << exp[i];
            else if(exp[i] == ')')
            {
                cout << symStack.top();
                symStack.pop();
            }
            else if(exp[i] != '(')
                symStack.push(exp[i]);
        }
        cout << endl;

    }
    return 0;
}

*/
