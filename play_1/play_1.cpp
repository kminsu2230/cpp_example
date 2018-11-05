#include <iostream>
 
using namespace std;
 
int main()
{
    int num=0;
 
    while (num < 3)
    {
        num++;
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;
        int d;
        cin >> d;
        int sum;
        sum = a + b + c + d;
        if (sum == 4)
        {
            std::cout << "E" << std::endl;
        }
        else if (sum == 3)
        {
            std::cout << "A" << std::endl;
        }
        else if (sum == 2)
        {
            std::cout << "B" << std::endl;
        }
        else if (sum == 1)
        {
            std::cout << "C" << std::endl;
        }
        else
        {
            std::cout << "D" << std::endl;
        }
    }
    return 0;
 
}
