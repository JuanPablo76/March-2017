#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;


void jukebox(int sound);

int main() {
	cout << "Choose a song 1-4" << endl;
	int num;
	cin >> num;
	jukebox(num);
}

void jukebox(int sound) {
	switch (sound) {
	case 1:
		PlaySound(TEXT("cartoon005.wav"), NULL, SND_FILENAME);
		cout << "cartoon005.wav" << endl;
		break; 
	case 2:
		PlaySound(TEXT("cartoon044.wav"), NULL, SND_FILENAME);
		cout << "cartoon044.wav" << endl;
		break;
	case 3:
		PlaySound(TEXT("cartoon047.wav"), NULL, SND_FILENAME);
		cout << "cartoon047.wav" << endl;



	}
}