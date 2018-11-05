#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int k;
    cin >> k;
 
    int h[10000];
 
    int num = 0;
    if (1 <= k <= n <= 10000)
    {
        for (int i = 1; i <= n; i++)
        {
            if (n%i==0)
            {
                num++;
                h[num] = i;
            }
        } 
    }
    if (num < k)
    {
       cout << 0;
    }
    else
    {
        cout << h[k];
    }
    
 
    return 0;
}
