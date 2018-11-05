#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    
    int num [n][m];
    
    int sum =0;
    
    sum = n*m;
    
    int count=1;
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++ )
        {   
            if (count <= sum)
            {
               num[i][j] = count;
               count++;
               cout << num[i][j] <<" ";
            }
        }
        cout << "\n";
    }
    return 0;
}
