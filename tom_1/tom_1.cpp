#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
 
    if (a <= b <= 1000)
    {
        int i = 0;
        int num = 1;
        for (i = a; i <= b; i++)
        {
            if (num != 8)
            {
                num++;
                cout << i << " ";
            }
            else
            {
                num = 1;
                cout << i << "\n";
            }
        }
    }
 
 
    return 0;
}
