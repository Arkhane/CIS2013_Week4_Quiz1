#include <iostream>

using namespace std;

int main()
{
	int FOO, BAR;
	int counterFOO;
	int counterBAR;

	

	for (int i = 1; i <= 2000; i++)
	{
		
		if (i % 50==0)
		{
			cout << "FOO" << endl;
			counterFOO++;
		}

		else if (i % 33==0)
		{
			cout << "BAR" << endl;
			counterBAR++;
		}
		else 
		{
			cout << i << endl;
		}

		

	}

	cout << "FOO count is: " << counterFOO << endl;
	cout << "BAR count is: " << counterFOO << endl;
	

	return 0;
}
