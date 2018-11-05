#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int a;
    cin >>a;
    char i;
    cin >>i;
    int b;
    cin >>b;
    switch (i)
    {
        case '+':
            cout << a+b<< endl;
            break;
        case '-':
            cout << a-b<< endl;
            break;
        case '*':
            cout << a*b<< endl;
            break;
        case '/':
            cout << a/b<< endl;
            break;
        default:
            break;
    }
    return 0;
}
