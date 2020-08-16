#include <iostream>
#include <functional>
#include "Music.h"
#include "Display.h"

using namespace std;

int main() {
	Display display;
	display.welcome();
	string lname, rname;
	cin >> lname >> rname;
	hash<string> str_ptr;
	int hashnumber = str_ptr(lname + rname);
	Music music;
	if (rname == "mom") music = Music(5);
	else music = Music(hashnumber);
	music.player();
	if (rname == "mom") display.lovelwtter(5);
	else display.lovelwtter(hashnumber);
}