#pragma once
#include<iostream>

using namespace std;
namespace KnowIt {

	namespace PGDAC {

		class Student {
			int Rno;
			char name[20];
			int totalMarks;
			float Percentage;
		public:
			Student() {
				Rno = 1;
				
			}
			int countStudent() {
				return Rno;
			}

		};

	}
	namespace PGDBDA {

		class Student {
			int Rno;
			char name[20];
			char bloddGroup[5];
			int height;
			int weight;

		public:
			Student() {
				Rno = 2;


			}
			int countStudent() {
				return Rno;
			}

		};

	}
}
	

