#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int ju[3];
    int sum=0;
 
    int value[1000];
 
 
    for (int i= 0; i<n; i++)
    {
        for (int k=0; k<3; k++)
        {
            cin >> ju[k];
        }
        sum = 0;
        if (ju[0]==ju[1] and ju[1]==ju[2] and ju[2] == ju[0])
        {
            sum = 10000+(ju[0]*1000);
        }
        else if(ju[0]==ju[1])
        {
            sum = 1000+(ju[1]*100);
        }
        else if(ju[1]==ju[2] )
        {
            sum = 1000+(ju[2]*100);
        }
        else if (ju[2] == ju[0])
        {
            sum = 1000+(ju[2]*100);
        }
        else
        {
            int max=ju[0];
            for (int z =0; z<3; z++)
            {
                if (max<ju[z])
                {
                    max = ju[z];
                }
            }
            sum = max * 100;
        }
 
        value[i]=sum;
    }
    int f_max=value[0];
    for (int v=1; v<n; v++)
    {
        if (f_max<value[v])
        {
           f_max = value[v];
        }
    }
 
    cout << f_max;
    return 0;
}
