/*
#include <iostream>
#include <functional>
#include "Music.h"

using namespace std;

int main() {
	//test music class:
	string str = "JCHDJQ";
	hash<std::string> str_hash;
	int hs = str_hash(str);
	Music music(hs);
	cout << "first play\n";
	music.player();
	string temp = "-5543433434321135666552243135666552243432123-611-71";
	music.add(temp);
	cout << "second play\n";
	music.player();
	music.set(hs);
	cout << "third play\n";
	music.player();
	return 0;
}*/