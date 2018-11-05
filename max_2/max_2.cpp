#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
 
int main()
{
 
    int h[10];
 
    int n=0;
 
    while (n < 9)
    {
        cin >> h[n];
        n++;
    }
 
    int max=h[0];
    int w = 0;
    
    for (int i=0; i<9; i++)
    {
        if(h[i] > max)
        {
            max = h[i];
            w = i;
        }
    }
    cout << max << "\n" <<w+1;
    return 0;
}
