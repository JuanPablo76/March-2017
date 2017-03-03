#include <iostream>

using namespace std;

int one = 0;
int two = 0;
int three = 0;

void sort();

int main() {


	cout << "Hello! Please put three numbers in." << endl;
	sort();

}

void sort() {
	cin >> one;
	cin >> two;
	cin >> three;

	if ((one > two) && (one > three) && (two > three))
		cout << one << two << three << endl;

	else if ((one > two) && (one > three) && (two < three))
		cout << one << three << two << endl;

	else if ((two > one) && (two > three) && (one > three))
		cout << two << one << three << endl;

	else if ((two > one) && (two > three) && (one < three))
		cout << two << three << one << endl;

	else if ((three > one) && (three > two) && (one > two))
		cout << three << one << two << endl;

	else if ((three > two) && (three > one) && (two > one))
		cout << three << two << one << endl;

}