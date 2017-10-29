#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

const int SEC_NUM = 12;

void main()
{
	//assuming (by the lecturer's guidance) no more than 2 dig number
	cout << "Time until takeoff: " << SEC_NUM;
	for (int i = SEC_NUM - 1; i >= 0; i--)
	{
		std::this_thread::sleep_for(1000ms);
		cout << "\b\b";
		if (i < 10)
			cout << " ";
		cout << i;
	}
}