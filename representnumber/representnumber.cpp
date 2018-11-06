#include <iostream>
 
using namespace std;
 
int main()
{
    int n=10;
    int num[10];
    int sum=0;
 
    for (int i = 0; i < n; i++)
    {
        cin>> num[i];
        if (num[i]<=1000)
        {
            if (num[i]%10==0)
            {
                sum = sum+num[i];
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
 
    int v=0;
    int su[10][2];
    sum = sum/10;
    for (int j=0; j<n; j++)
    {
        for (int u=0; u<n; u++)
        {
            if (num[j]==num[u])
            {
                v++;
                su[j][0]=num[j];
                su[j][1]=v; 
            }
        }
        v=0;
    }
 
    int max_num=su[0][1];
    for (int k =0; k<n; k++)
    {
        if (max_num<su[k][1])
        {
            max_num = su[k][1];
        }
    }
    
    
    int temp[10];
    int point=0;
    for (int y=0; y<n; y++)
    {
        if (max_num==su[y][1])
        {
            temp[point]= su[y][0];
            point++;
        }
    }
    
    int value =temp[0];
    for (int g=0; g<point; g++)
    {
        if (temp[g]<value)
        {
            value = temp[g];
        }
        else
        {
            continue;
        }
    }
 
 
 
    cout << sum <<"\n";
    cout << value ;
    return 0;
}
