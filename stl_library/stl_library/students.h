#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

struct student
{
	string name;
	int age;
	student(int a, string b)
	{
		age = a;
		name = b;
	}
};

struct things_with_students
{
	vector<student*> stud;
	void addStudent(int ag, string nam)
	{
		student* newstud = new student(ag, nam);
		stud.push_back(newstud);
	}
	void deleteStudent(int num)
	{
		stud.erase(stud.begin() + num);
	}
	void printStudent()
	{
		for (int i = 0; i < stud.size(); i++)
		{
			cout << stud[i]->name << " is " << stud[i]->age << " years old" << endl;
		}
	}
};




#endif
