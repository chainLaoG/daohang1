#include<iostream>
#include<string>
using namespace std;



int main()
{
	int num[10] = {5,8,2,10,7,15,13,11,20,18};
	for (int i = 0;i < 9;i++)
	{
		for (int j = 0; j < 9 - i;j++)
		{
			if (num[j] > num[j + 1])
			{
				int a = num[j];
				num[j] = num[j + 1];
				num[j + 1] = a;

			}

		}

	}
	for (int i = 0;i < 10;i++)
	{
		cout << num[i] << " ";

	}




	return 0;
}