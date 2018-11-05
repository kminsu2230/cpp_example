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
 
    int min=h[0];
    int w = 0;
    
    for (int i=0; i<9; i++)
    {
        if(h[i] < min)
        {
            min = h[i];
        }
    }
 
    int min2=min;
 
    for (int j=0; j<9; j++)
    {
        if(h[j]<min)
        {
            min2 = min;
            min = h[j];
        }
        else if (( min < h[j] and h[j] < min2 ) or min ==  min2)
        {
            min2 = h[j];
            w= j;
        }
    }
 
 
    cout << min2 << "\n" <<w+1;
    return 0;
}
