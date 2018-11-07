#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int s;
    cin >> s;

    int p=s;
    // n = 반복값
    for (int i = 0; i < n; i++)
    {
        // n-1로 시작해서 역순으로 공백 생성
        for (int j = n-1; i < j; j--)
        {
            cout << " ";
        }
        // i값이 홀수일때 순서대로 출력 (코딩기준)
        if (i % 2 == 1)
        {
            // 증가값이 1, 3, 5, 7...
            for (int a=0; a<(2*i)+1;a++) 
            {
                // 처음은 3 이후 값변화에따라 증가값 출력 및 초기화 출력
                cout << s;
                if (s==9)
                {
                    s = 1;
                }
                else
                { 
                    s= s+1;

                }
            } 
        }
        // i값이 짝수일때 역순대로 출력 (코딩기준)
        else
        {
            // 누적값을 저장하기 위해 지역변수 생성
            int t;
            // 역순으로 출력하기 위해 값을 증가시키거나, 초기화 하는 단계
            for (int k=0; k<2*i; k++)
            {
                 if (s==9)
                 {
                     s=1;
                 }
                 else
                 {
                     s= s+1;
                 }
            }
            // 위에서 증가 혹은 초기화된 값을 저장 
            t=s;
            // 누적 값을 가지고 다시 역순으로 출력 * 역순이기 때문에 이번에는 증감값 및 최고값 누적
            for (int q=0; q<(2*i)+1; q++)
            {
                cout << s;
                if (s==1)
                { 
                    s=9;
                }
                else
                {
                    s=s-1;
                }
            }
            // 역순으로 출력된 값을 다시 반대로 돌려주기 위해 
            s=t;
            // 역순으로 누적된 값이 아닌 홀수 번째 값을 저장 한 부분이므로 다음값 누적
            if (s==9)
            {
                s=1;
            }
            else
            {
                s=s+1;
            }
        }
        // 줄바꿈
        cout <<"\n";
    }
    return 0;
}
