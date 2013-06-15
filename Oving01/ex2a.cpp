#include <iostream>

using namespace std;

int main()
{
	int in;
	cout << "Skriv antall sekunder: ";
	cin >> in;

	int hours, minutes, seconds;
	
	hours = (in / 3600);
	minutes = (in / 60) % 60;
	seconds = in / 3600;
	cout << hours << " timer, " << minutes << " minutter og "
		<< seconds << " sekunder." << endl;
	
	return 0;
}