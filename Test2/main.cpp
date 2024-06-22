#include <iostream>

#include <Windows.h>
using namespace std;

int main()
{
	HINSTANCE load;
	load = LoadLibrary(L"DinamikLib.dll");
	typedef int(*sum) (int a, int b);
	sum Sum;
	Sum = (sum)GetProcAddress(load, "Sum");
	int a = 100;
	int b = 20;
	cout << Sum(a, b);
	FreeLibrary(load);

}