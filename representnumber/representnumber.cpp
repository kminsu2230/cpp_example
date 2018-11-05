#include <iostream>
 
using namespace std;
 
int main()
{
 
    int h[10];
    int n=10;
    int sum=0;
 
    for (int v =0; v<n; v++)
    {   
        cin >> h[v];
        if (0<h[v]<=1000 and h[v]%10==0)
        {
            sum= sum + h[v];
        }
        else
        {
            break;
        }
        
    }
    sum = sum/10;
    int s=0;
    int s2=0;
    int value=0;
    for (int j = 0; j<n; j++)
    {
        s=0;
        for (int k =0; k<n; k++)
        {
            if (h[j]==h[k])
            {
                s++;
            }
            if (s>s2)
            {
                s2 = s;
                value = h[j];
            }
            if (s==s2)
            {
                if (value < h[j])
                {
                    continue;
                } 
            }
 
        }
    }
    
 
 
    cout << sum <<"\n";
    cout << value;
 
    return 0;
}
