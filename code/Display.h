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
	std::string chinesepoem[5] = {"\t\t������֮��\n\t\t\tÿ��ҹ��\n\t\t\t\t�Һ�����һ��˯����",
		"\t\tֻҪ���תͷ\n\t\t\t��һֱΪ�㾲��\n\t\t\t\tһ��Ϊ��",
		"\t\t�������PM2.5\n\t\t\t�ҵİ�����\n\t\t\t\t�������ֺ����ڵ۶�",
		"\t\t�����ܴ�\n\t\t\t��վ�ڷ��\n\t\t\t\t�ҵ��������������ϵ�ζ��",
		"\t\t����Զ��������\n\t\t\t��С���ֹ����Ǿ仰\n\t\t\t\t˵�ҵĳ���������һ����õ�����"
	};
	std::string englishpoem[5] = { "\t\tEvery day with you gives me a thrill;\n\t\t\tAll my dreams you richly fulfill.\n\t\t\t\tI'm a fool for your charms;",
		"\t\tI��d spend the time\n\t\t\tIn pleasure sublime,\n\t\t\t\tJust by being with you.",
		"\t\tI give to you my deepest devotion.\n\t\t\tMy fondest wishes you completely fulfill;\n\t\t\t\tI love you totally, and I always will.",
		"\t\tIf tomorrow my life were finished,\n\t\t\tWith many fun things left to do,\n\t\t\t\tIt wouldn't matter at all,\n\t\t\t\t\tBecause, my love, I had you.",
		"\t\tYou��re my mother,\n\t\t\tI would have no other!"
	};
};

