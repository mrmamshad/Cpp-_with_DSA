#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int check = 1;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < check; j++)
        {
            cout << ch;
            ch++;
        }
        check++;
        cout << endl;
    }
    return 0;
}