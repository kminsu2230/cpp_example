#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;

    int num[n][n];

    int count=1;
    int count2=0;
    int count3=1;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-i; j++ )
        {    
             count = count +j+i;
             num[i][j]=count;
             cout << num [i][j]<<" ";  
        } 
        count2++;
        count3 = count2 +count3;
        count = count3;
        cout << "\n";      
    }


    return 0;
}
