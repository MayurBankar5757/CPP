#define _CRT_SECURE_NO_WARNINGS
#include"Player.h";

using namespace std;

Player::Player() {

	Player_Id = count;
	Player_name = new char[4];
	strcpy(Player_name, "ABC");
	wk = 1;
	run = 10;
	inning = 1;
	count++;



}

Player :: Player( const char* c, int wk, int run, int inning) {

	Player_name = new char[strlen(c)+1];
	Player_Id = count++;
	strcpy(Player_name, c);
	this->wk = wk;
	this->run = run;
	this->inning = inning;

}
void Player ::Display() {

	cout << "\n Player Details"<<endl;
	cout << "\n Player Name : "<< Player_name;
	cout << "\n Player Id : " << Player_Id;
	cout << "\n Wickets : " << wk;

	cout << "\n Run : " << run;
	cout << "\n Innings : " << inning;


}
void Player::Accept(const char* nm,int wk,int run ,int inning) {

	Player_name = new char[strlen(nm) + 1];
	Player_Id = count++;
	strcpy(Player_name, nm);
	this->wk = wk;
	this->run = run;
	this->inning = inning;

}
int Player::getRun() {
	return run;
}
int Player::getWk() {
	return wk;
}


void Player::maxRun(Player p[]) {
	int mx = p[0].getRun();
	for (int i = 1; i < count; i++) {
		mx = p[i].getRun() > mx ? p[i].getRun() : mx;
	}
	cout << "\n Player with Maximum Runs:" << mx<< endl;
	
}
void Player::maxWk(Player p[]) {
	int mx = p[0].getWk() ;
	for (int i = 1; i < count; i++) {
		mx = p[i].getWk() > mx ? p[i].getWk () : mx;
	}
	cout << "\n Player with Maximum Wickets:" << mx << endl;

}