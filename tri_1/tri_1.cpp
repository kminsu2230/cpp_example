#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    cin >> a;
 
    if (0<=a<=100)
    {
        for (int i=1; i<=a; i++)
        {   
            for (int k=0; k<i; k++)
            {
                cout <<"*";
            }
            cout << "\n";
        }
    }
 
    return 0;
}
