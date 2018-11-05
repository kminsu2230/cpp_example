#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int a[10];
    int b[10];
 
    char sum[10];
    int sa=0;
    int sb=0;
    
    for (int a_1=0; a_1<10; a_1++)
    {
        cin >> a[a_1];
    }
    for (int b_1=0; b_1<10; b_1++)
    {
        cin >> b[b_1];
    }
    
    for (int s=0; s<10; s++)
    {
        if (a[s]>b[s])
        {
            sum[s] = 'A';
            sa++;
        }
        else if (a[s]<b[s])
        {
            sum[s] = 'B';
            sb++;
        }
        else
        {
            sum[s] = 'D';
        }
    }
    if (sa>sb)
    {
        cout << "A";
    }
    else if (sa<sb)
    {
        cout << "B";
    }
    else
    {
        cout << "D";
    }
 
 
    return 0;
 
 
}
