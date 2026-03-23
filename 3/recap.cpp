#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) 
{
	if (argc != 3) 
	{
		        cout << "Please insert two numbers" << endl;
			return 0;
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	if (num2 <= num1) 
	{
		 return 0; 
	}

	int sum = 0;
	for (int i = num1; i <= num2; ++i) 
	{
		 sum += i;
      	}
	cout << sum << endl;

	return 0;
}

