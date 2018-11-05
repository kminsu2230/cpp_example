#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int temp;
    temp= a;
    a = b;
    b = temp;
    std::cout << a <<" " << b << std::endl;
    return 0;
}
