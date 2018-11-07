#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int s;
    cin >> s;

    int p=s;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; i < j; j--)
        {
            cout << " ";
        }
        if (i % 2 == 1)
        {
            for (int a=0; a<(2*i)+1;a++)
            {
                if (p==1)
                {
                    cout << p;
                    p = 9;
                }
                else
                {
                    cout << p;
                    p++;

                }

            } 
        }
        else
        {
            for (int k=0; k<2*i; k++)
            {
                 if (p==1)
                 {
                     cout <<p;
                     p=9;
                 }
                 else
                 {
                     cout <<p;
                     p++;
                 }
            }
            int t=0;
            t=p;
            for (int q=0; q<2*i+1; q++)
            {
                cout << p;
                if (q!=2*i)
                {
                    if (p==9)
                    { 
                        p=1;
                    }
                    else
                    {
                        p--;
                    }
                }
            }
            p=t;
            if (p==1)
            {
                p=9;
            }
            else
            {
                p++;
            }
        }
        cout <<"\n";
        p=p-1;
    }
    return 0;
}
