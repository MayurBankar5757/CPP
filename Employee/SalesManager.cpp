#include"SalesManager.h"

using namespace std;

SalesManager::SalesManager(int id, const char* nm, int d, int m, int y, int r, int h, int s, int c,int sal,int com):Manager(id,nm,d,m,y,s,c),SalesPerson(id,nm,d,m,y,r,h,sal,com) {


}
void SalesManager::Display() {

	Manager::Display();
	SalesPerson::Display();
}