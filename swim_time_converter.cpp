#include <iostream>
#include <cmath>
using namespace std;

void main() 
{
	// Receive input data
	cout << "This program can convert swiming times between SCY, SCM, and LCM." << endl;
	cout << "What is the length of the event? Give response in form \"distance, pool length\", for example \"100 SCY\". ";
	string length;
	cin >> length;
	cout >> "What is the time? Give response in form \"MM:SS.DD\", for example \"04:25.36\". ";
	string time;
	cin >> time;
	cout<< "To what pool type would you like to convert? Options: SCY, SCM, or LCM. ";
	string unitTo;
	cin >> unitTo;
	cout << endl;

	// Parse length input
	int index_space = length.find(" ", 0);
	int distance = stoi(length.substring(0, index_space));
	string unit = length.substring(index_space+1, 3);

	// Parse time input
	int time_m = stoi(time.substring(0,2));
	int time_s = stoi(time.substring(3,2));
	int time_dec = stoi(time.substring(5,2));

	// Perfrom calculations
	if (unit = "SCY")
	{
		if (unitTo == unit)
		{
			cout << "Cannot convert to same type. Expected\"SCM\" or \"LCM\"" << endl;
		}
		// TODO
	}
	else if (unit = "SCM")
	{
		if (unitTo == unit)
		{
			cout << "Cannot convert to same type. Expected\"SCY\" or \"LCM\"" << endl;
		}
		// TODO
	}
	else if (unit = "LCM")
	{
		if (unitTo == unit)
		{
			cout << "Cannot convert to same type. Expected\"SCY\" or \"SCM\"" << endl;
		}
		// TODO
	}
	else
	{
		cout << "Invalid pool type given. Expected \"SCY\", \"SCM\", or \"LCM\"" << endl;
		return;
	}

	// Output results
	// TODO
}