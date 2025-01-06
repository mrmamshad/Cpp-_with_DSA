// Sum of all numbers from 1 to N which are divisible by 3

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter your n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            // cout << i << endl;
            sum = sum + i;
        }
    }
    cout << "Your divisible by 3 values sum is : " << sum << endl;
    return 0;
}