#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;


void jukebox(int sound);

int main() {
	cout << "How many wistles do you want?" << endl;
	int num;
	cin >> num;
	jukebox(num);
}

void jukebox(int sound) {
	for (int i=0;i < sound; i++)
		PlaySound(TEXT("wistle.wav"), NULL, SND_FILENAME);
	
	}