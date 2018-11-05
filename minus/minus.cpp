#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int sum;
    sum = a-b;
    if (sum <0)
    {
       sum = -1;
    }
    std::cout <<sum<< std::endl;
    return 0;
}
