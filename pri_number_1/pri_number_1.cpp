#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    cin >> a;
 
    int num = 0;
    if (0<=a<=20000)
    {
        for (int i = 1; i <= a; i++)
        {
            if (a%i==0)
            {
                num++;
            }
        }
        if (num == 2)
        {
            cout << "YES";
        }
        else
        {
            cout <<"NO";
        }
    }
 
    return 0;
}
