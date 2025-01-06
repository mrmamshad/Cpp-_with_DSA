// print factorial of number n ;

#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "write your factorial Number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // cout<<i<<endl;
        // cout<< "fact is "<<fact<<endl;
        fact = fact * i;
    }
    cout << "Your factorial value is : " << fact << endl;
    return 0;
}