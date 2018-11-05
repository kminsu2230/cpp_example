#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int r[20];
 
    int p=0;
 
    while(n >0)
    {
        r[p]=n%2;
        n=n/2;
        p++;
    }
 
    for (int k=p-1; k>=0; k--)
    {
        cout << r[k];
    }
 
    return 0;
 
 
}
