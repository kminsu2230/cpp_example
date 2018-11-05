#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    cin >> a;
 
    if (1 <= a <= 9)
    {
        for (int i = 1; i <= 9; i++)
        {
            cout << a<< "*"<<i <<"="<<a*i << "\n";
        }
    }
 
 
    return 0;
}
