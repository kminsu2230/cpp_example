#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
     
 
    int h[10000];
 
    
    if (0<=n <=m<=20000)
    {   
        for (int i = n; i <= m; i++)
        {
            int num = 0;
            int sum;
            for (int k =1; k<=i; k++)
            {
                sum = i%k;
                if (sum == 0)
                {
                    num++;
                }
            }
            if (num == 2)
            {
                h[n]=i;
                cout << h[n] << " ";
            }
        }
 
    }
 
    return 0;
}
