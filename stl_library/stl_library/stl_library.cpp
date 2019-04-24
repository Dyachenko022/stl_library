// stl_library.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "students.h"
#include "complex.h"
#include <iostream>

int main()
{
	cout << "which part of the program do you want to choose? (1- vector, 2- list, 3- queue) " << endl;
	int exm;
	cin >> exm;
	switch (exm)
	{
	case 1:
	{
		cout << "now the program will add a student into our vector" << endl;
		cout << "enter student age: ";
		int ageStud;
		cin >> ageStud;
		cout << endl;
		cout << "enter student name: ";
		string nameStud;
		cin >> nameStud;
		things_with_students studentent;
		studentent.addStudent(ageStud, nameStud);
		studentent.printStudent();
		cout << "which number studentto delete? ";
		int numberDel;
		cin >> numberDel;
		studentent.deleteStudent(numberDel);
		cout << "vector after deleting the student: " << endl;
		studentent.printStudent();
		break;
	}
	case 2:
	{
		complex c;
		things_with_complex tc;
		int choose = 2;
		while (choose != 0)
		{
			cout << "Add complex? (1- yes; 0- no)" << endl;
			cin >> choose;
			if (choose == 1)
			{
				cout << "Enter complex\nreal: ";
				cin >> c.re;
				cout << "\nimaginary: ";
				cin >> c.im;
				cout << endl;
				tc.enterComplex(c.re, c.im);
			}
		}
		tc.printComplex();
		break;
	}
	case 3:
	{
		queue<int>myQueue;

		int i;
		int exit = 0;
		while (exit == 0)
		{
			cout << "1- enter new car, other- quit" << endl;
			int choose;
			cin >> choose;
			if (choose == 1)
			{
				cout << "enter car number" << endl;
				int carnum;
				cin >> carnum;
				myQueue.push(carnum);
				cout << endl;
			}
			else
				exit++;
		}
		for (int i = 0; i < myQueue.size(); i++)
		{
			cout << "current places taken: " << myQueue.front() << endl;
			myQueue.pop();
			system("pause");
			system("cls");
		}
		break;
	}
	default:
	{
		cout << "part chosen wrong " << endl;
		break;
	}
	}

	
	cout << "enter to end the program" << endl;
	cin.get();
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
