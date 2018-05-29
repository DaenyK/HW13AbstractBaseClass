#include "manager.h"
#include "programmer.h"
#include "administrator.h"
#include "car.h"
#include "plane.h"
#include "train.h"

int main()
{
	setlocale(LC_ALL, "russian");
	short nz, answer;
	do
	{
		cout << "выберите задание:" << endl
			<< "1 - worker" << endl
			<< "2 - carrier" << endl
			<< "0 - для выхода\n";
		cin >> nz;
		system("cls");

		switch (nz) {
		case 1:
		{
			worker **workers;
			workers = new worker*[3];

			manager m("John", "Wick", 40, 1500, "sales department");
			workers[0] = &m;

			programmer p("Mark", "Darcy", 30, 2200, "team lead");
			workers[1] = &p;

			administrator a("Lily", "Chester", 28, 1400, "academy");
			workers[2] = &a;
			
			cout << "name\tsurname\tage\tsalary\tdepartment/level\n";
			for (int i = 0; i <3; i++)
				(*workers[i]).print();
		}break;

		case 2:
		{
			gruz**g;
			g = new gruz*[3];

			plane p(75, 10000, "Moscow", 10, 30);
			g[0] = &p;

			train t(30, 3500, "Semey", 23, 30);
			g[1] = &t;

			car c(8, 15, "Talgar", 2, 15);
			g[2] = &c;
			cout << "$\tdistanse\tcity\thour\tminute\n";
			for (int i = 0; i <3; i++)
				(*g[i]).print();

		}break;
		}

		cout << endl;
		cout << "хотите продолжить?1/0 ";
		cin >> answer;
		system("cls");
	} while (answer != 0);


	system("pause");
	return 0;
}