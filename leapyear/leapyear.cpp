#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    long int a;
 
    cin >> a;
 
    if (a<=5000)
    {
        if (a%4 ==0 and a%100 != 0)
        {
            cout << "YES" << endl;
        }
        else if (a%400==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
