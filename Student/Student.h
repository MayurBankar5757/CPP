#pragma once
#include"Date.h"

class Student {
	int rno;
	char name[20];
	Date dob, doa;

public:
	Student();
	Student(int , const char *,int,int ,int,int,int,int);
	void Display();
	void Accept();
};