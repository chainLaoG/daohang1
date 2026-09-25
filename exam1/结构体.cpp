#include<iostream>
#include<string>
using namespace std;

struct Student
{
	char name[50];
	int id;
	float score;
};

void input(Student* p)
{
	cout << "name:";
	cin >> p->name;
	cout << endl;
	cout << "id:";
	cin >> p->id;
	cout << endl;
	cout << "score:";
	cin >> p->score;
	cout << endl;

}

void output(Student* p)
{
	cout << "name:" << p->name << endl;
	cout << "id:" << p->id << endl;
	cout << "score:" << p->score << endl;

}




int main()
{
	Student stu;
	Student* p = &stu;

	input(p);
	output(p);

	system("pause"); 
	return 0;
}
