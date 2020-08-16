#include "Display.h"

using namespace std;

void Display::welcome()
{
	system("color f0");
	int getnumber = 0;
	while (getnumber != 1 && getnumber != 2) {
		cout << "\t按1选择中文" << '\n'
			<< "Press 2 to select English" << '\n';
		cin >> getnumber;
	}
	laguageflag = getnumber == 1 ? true : false;
	system("cls");
	this->beatingheart();
	system("cls");
	if (laguageflag) {
		cout << "请输入你的名字和你要表白人的名字" << '\n';
	}
	else {
		cout << "please input your name and the name of your boy/girl:" << '\n';
	}
}

void Display::beatingheart()
{
	system("color fc");
	if (laguageflag) {
		delaycout("时至今日，你仍是我心驰所往。");
		cout << "按0继续" << '\n';
		Sleep(80);
	}else{
		delaycout("baby, you occupy all my heart");
		cout << "press any enter to continue" << '\n';
		Sleep(80);
	}

	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
	_TCHAR buffer[25][80] = { _T(' ') };
	_TCHAR ramp[] = _T(".:-=+*#%@");
	for (float t = 0.0f;t < 3 ; t += 0.1f) {
		
		int sy = 0;
		float s = sin(hearthelp(t, t, t));
		float a = s * s * s * s * 0.2f;
		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
			_TCHAR* p = &buffer[sy++][0];
			float tz = z * (1.2f - a);
			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
				float tx = x * (1.2f + a);
				float v = hearthelp(tx, 0.0f, tz);
				if (v <= 0.0f) {
					float y0 = hearthelp(tx, tz);
					float ny = 0.01f;
					float nx = hearthelp(tx + ny, tz) - y0;
					float nz = hearthelp(tx, tz + ny) - y0;
					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
					*p++ = ramp[(int)(d * 5.0f)];
				}
				else
					*p++ = ' ';
			}
		}
		for (sy = 0; sy < 25; sy++) {
			COORD coord = { 0, sy };
			SetConsoleCursorPosition(o, coord);
			WriteConsole(o, buffer[sy], 79, NULL, 0);
		}
		Sleep(60);
	}
}

void Display::lovelwtter(int select)
{
	if (laguageflag) {
		if (select == 5) delaycout(chinesepoem[4]);
		else delaycout(chinesepoem[select % 4]);
	}
	else {
		if (select == 5) delaycout(englishpoem[4]);
		else delaycout(englishpoem[select % 4]);
	}
}


float Display::hearthelp(float x, float z)
{
	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
		if (hearthelp(x, y, z) <= 0.0f)
			return y;
	return 0.0f;
}

float Display::hearthelp(float x, float y, float z)
{
	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

void Display::delaycout(string str)
{
	for (auto s : str) {
		cout << s;
		Sleep(80);
	}
	cout << '\n';
}


