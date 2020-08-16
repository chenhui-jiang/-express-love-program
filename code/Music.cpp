#include "Music.h"
using namespace std;


Music::Music(int hashnumber)
{
	if (hashnumber == 5)
		musicsheet = convert(defultmusic[4]);
	else {
		int numb = hashnumber % 4;
		musicsheet = convert(defultmusic[numb]);
	}
	
	vector<int> temp = convert(hashnumber);
	for (auto& te : temp) {
		musicsheet.push_back(te);
	}
	
}

Music::Music(string str)
{
	musicsheet = convert(str);
}

void Music::add(string str)
{
	vector<int> temp = convert(str);
	for (int tm : temp) {
		musicsheet.push_back(tm);
	}
}

void Music::add(int num)
{
	vector<int> temp = convert(num);
	for (int tm : temp) {
		musicsheet.push_back(tm);
	}
}

void Music::set(std::string str)
{
	musicsheet.clear();
	musicsheet = convert(str);
}


void Music::set(int number)
{
	musicsheet.clear();
	musicsheet = convert(number);
}

void Music::player()
{
	for (auto ms : musicsheet) {
		Beep(ms, singletime);
	}
}

std::vector<int> convert(std::string str)
{
	vector<int> res;
	if (str.empty()) return res;
	for (auto s = str.begin(); s != str.end(); s++) {
		int notenum = 0;

		if (*s == '+') notenum = (*(++s) - '0') + 14;
		else if (*s == '-') notenum = (*(++s) - '0');
		else if(*s > '0' && *s < '9') notenum = (*(s) - '0') +7;
		else throw runtime_error("Bad data: " + *s );// throw the error data

		res.push_back(musicnote[notenum]);
	}
	return res;
}

vector<int> convert(int hashnumber)
{
	vector<int> ret;
	while (hashnumber != 0) {
		int notenum = hashnumber % 100;
		ret.push_back(musicnote[notenum%21]);
		hashnumber = hashnumber / 100;
	}
	return ret;
}
