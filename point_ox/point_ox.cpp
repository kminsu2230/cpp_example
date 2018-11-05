#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
 
int main()
{
 
    int h[100];
    int m[100];
    int n;
    cin >> n;
 
    for (int v =0; v<n; v++)
    {
        cin >> h[v];
    }
 
    int sum =0;
    for (int i = 0; i<n; i++){
        if (h[i]==1)
        {
           if (h[i-1]==1)
           {
                  m[i] = m[i-1] +1;
                  sum = sum+m[i]; 
           }
           else
           {
                  m[i] = 1;
                  sum++;
           }
        }
 
    }
 
    cout << sum;
 
    return 0;
}
