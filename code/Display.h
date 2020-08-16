#pragma once
#include <iostream>
#include<string>
#include <math.h>
#include <tchar.h>
#include <windows.h>
class Display
{
public:
	Display() = default;
	void welcome();
	void beatingheart();
	void lovelwtter(int select);
private:
	float hearthelp(float, float);
	float  hearthelp(float, float, float);
	void delaycout(std::string);

	bool laguageflag = false;//true is Chinese mode and false is English mode
	std::string chinesepoem[5] = {"\t\t遇见你之后\n\t\t\t每个夜晚\n\t\t\t\t我和星星一样睡不着",
		"\t\t只要你肯转头\n\t\t\t我一直为你静候\n\t\t\t\t一生为期",
		"\t\t如果你是PM2.5\n\t\t\t我的爱就是\n\t\t\t\t不戴口罩呼吸在帝都",
		"\t\t今天风很大\n\t\t\t你站在风口\n\t\t\t\t我的世界满是你身上的味道",
		"\t\t我永远不会忘记\n\t\t\t你小声嘀咕的那句话\n\t\t\t\t说我的出生是您这一生最好的礼物"
	};
	std::string englishpoem[5] = { "\t\tEvery day with you gives me a thrill;\n\t\t\tAll my dreams you richly fulfill.\n\t\t\t\tI'm a fool for your charms;",
		"\t\tI’d spend the time\n\t\t\tIn pleasure sublime,\n\t\t\t\tJust by being with you.",
		"\t\tI give to you my deepest devotion.\n\t\t\tMy fondest wishes you completely fulfill;\n\t\t\t\tI love you totally, and I always will.",
		"\t\tIf tomorrow my life were finished,\n\t\t\tWith many fun things left to do,\n\t\t\t\tIt wouldn't matter at all,\n\t\t\t\t\tBecause, my love, I had you.",
		"\t\tYou’re my mother,\n\t\t\tI would have no other!"
	};
};

