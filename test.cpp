#include<iostream>
using namespace std;

class test
{
public:

	int A = 10;
	int B = 20;
};

int main()
{
	test new;
	int check = new.A;
	cout<<check<<end;
	return 0;
}