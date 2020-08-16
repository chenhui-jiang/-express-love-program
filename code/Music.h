#pragma once

#include <iostream>
#include <windows.h>
#include<string>
#include <vector>
//#include <functional>

//some const number for using
const int musicnote[22] = { 0,262,294,330,349,392,440,494,523,578,659,698,784,880,988,1046,1175,1318,1480,1568,1760,1976 };//the note for beep method
const std::string defultmusic[5] = { "-5543433434321135666552243135666552243432123-611-71"
								,"5+1+2+3+2+2+1+1+1+5+5+3+5+5+3+3+2+3+3+4+3+3+3+2+2+1+16+1+26+5556+1+1+1+16+1+2"
								,"-5-6113321321332111-61233-5-611-612323-5-5-611-6123232212"
								,"+1+1+2+3+2+3+2+3+2+3+1+2+3+3+2+1+1+1+1+1+27+1+1567+1+2+15355+4+3+2+1+1+2"
								,"6535+16563565321-6532235563215321-615" };//defult music tone

class Music
{
public:
	//constructors
	Music(int h = 0);//include default situtation make a music with a number
	Music(std::string);//make a music with a string with 3 scale(-7 to 14)

	void add(std::string str);//add note to music sheet with string type
	void add(int);//add note to music sheet with int type
	void set(std::string);//reset note to music sheet with string type
	void set(int);//reset note to music sheet with int type
	void player();//play the music
private:
	std::vector<int> musicsheet;//contain the music sheet
	int singletime = 400;//the length of note time
};

std::vector<int> convert(std::string);//convert from string to music sheet
std::vector<int> convert(int);//convert from int to music sheet
