/*#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t)
  {
        char input[300];
        int i,j,k=0;
        cin >> input;
        int len = strlen(input)/t;
        char op[len][t];
        for(i=0;i<len;i++)
        {
            if(i%2)
            {
                for(j=t-1;j>=0;j--)
                    op[i][j]=input[k++];
            }else
            {
                for(j=0;j<t;j++)
                {
                    op[i][j] = input[k++];
                }}
        }
        for(i=0;i<t;i++)
        {
            for(j=0;j<len;j++)
            {
                cout << op[j][i];
            }
        }
        cout << endl;
        cin >> t;
  }


 return 0;
}*/
