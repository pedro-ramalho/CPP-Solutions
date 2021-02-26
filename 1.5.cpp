#include <iostream>
using namespace std;

int main()
{
	int hour1, minute1, second1;
	int hour2, minute2, second2;
	int hour, minute, second, day;

	cout << "Time1 (hours minutes seconds) ? ";
	cin >> hour1 >> minute1 >> second1;

	cout << "Time2 (hours minutes seconds) ? ";
	cin >> hour2 >> minute2 >> second2;
  
	second = second1 + second2;
	minute = minute1 + minute2 + (second / 60);
	hour = hour1 + hour2 + (minute / 60);
	minute = minute % 60;
	second = second % 60;
	day = hour / 24;
	hour = hour % 24;

	cout << "Total Time is: " << day << " days " << hour << " hours " << minute << " minutes " << second << " seconds";
	return 0;
}
