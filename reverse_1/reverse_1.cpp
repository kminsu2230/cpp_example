#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    
    int h[10000];
 
    if (1<=n <=1000)
    {   
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        for (int j = n-1; j>=0 ; j--)
        {
            cout << h[j] << " ";
        }
 
    }
 
    return 0;
}
