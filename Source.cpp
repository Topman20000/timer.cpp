#include <iomanip>
#include <iostream>
using namespace std;
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
int main()
{
	for (int sec = 10; sec < 11; sec--)
	{
		cout << setw(2) << sec;
		cout.flush();

		Sleep(1);
		cout << '\r';
		if (sec == 0)
		{
			cout << "boom" << endl;
		}
		if (sec < 1)
			break;
	}
}