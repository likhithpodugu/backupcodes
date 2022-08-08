#include <string.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    const int max_n  = 9;
    const int max_no = 9;
    const int max_sum = 100;
 
    int n, s, a[max_no + 1][max_n + 1][max_sum + 1];
 
    long long sum_val = 0;
 
    memset(a, 0, sizeof(a));
 
    for (int i = 0; i < max_n; i++)
    {
        a[1][i][i] = 1;
    }
 
    for (int N = 2; N <= max_no; N++)
    {
        for (int i = 1; i <= max_n; i++)
        {
            for (int j = 1; j <= max_sum; j++)
            {
                if (j - i >= 0)
                {
                    for (int k = 0; k < i; k++)
                    {
                        a[N][i][j] += a[N - 1][k][j - i];
                    }
                }
            }
        }
    }
 
    cin >> n >> s;
 
      sum_val = 0;
 
        for (int i = 0; i <= max_n; i++)
        {
            sum_val += a[n][i][s];
        }
 
        cout << "Number of digits " << n << " and Sum = " << s;
        cout << "\nNumber of pairs: " <<sum_val << endl;
  
 
    return 0;
}