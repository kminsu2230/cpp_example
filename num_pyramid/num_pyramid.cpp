#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int s;
    cin >> s;
 
    int num[10] = { 0,1,2,3,4,5,6,7,8,9 };
    //{9,8,7,6,5,4,3,2,1}
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; i < j; j--)
        {
            cout << " ";
        }
        if (i % 2 == 0)
            for (int k = 0; k < (i * 2) - 1; k++)
            {
                if (s > 8)
                {
                    cout << num[s];
                    s = 1;
                }
                else
                {
                    cout << num[s];
                    s++;
                }
 
            }
        else
        {
            int temp[100];
            for (int u = 0; u < (i * 2) - 1; u++)
            {
 
                if (s > 8)
                {
                    temp[u] = num[s];
                    s = 1;
                }
                else
                {
                    temp[u] = num[s];
                    s++;
                }
            }
            for (int q = (i * 2) - 1; q > 0; q--)
            {
                cout << temp[q - 1];
            }
        }
        cout << "\n";
    }
 
 
    return 0;
}
