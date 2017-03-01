#include <string>
#include <iostream>
using namespace std;

int main() {
	string password;
	cout << "enter your password" << endl;
	getline(cin, password);
	if (password.compare("porter") == 0)
		cout << "Congrats, you've logged in!" << endl;
	else
		cout << "Wrong password" << endl;
}