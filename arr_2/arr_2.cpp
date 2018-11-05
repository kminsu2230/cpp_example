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
            cin >> num[i][j] ;
        }
    }
    int a;
    cin >> a;
    int b;
    cin >> b;
    
    cout << num[a][b] <<"\n";
    
    return 0;
}
