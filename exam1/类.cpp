#include<iostream>
#include<string>
using namespace std;

class Car
{
private:
	string color;
	int number;
public:
	Car(string co,int num)
	{
		color = co;
		number = num;
	}

	~Car()
	{

	}

	void display()
	{
		cout << "color:" << color << endl;
		cout << "number" << number << endl;

	}

};



int main()
{
	Car a("red",8888);
	Car b("green",6666);
	a.display();
	b.display();
	return 0;
}