#include <iostream>

using namespace std;

int func(int me,int overall)
{
	return (me % overall +1);
}

int main() 
{
	int me = 12, overall =10;
	cout << func (me,overall);
	return 0;
}
