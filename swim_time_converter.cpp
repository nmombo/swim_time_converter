#include <iostream>
#include <cmath>
using namespace std;

void main() 
{
	// Receive input data
	cout << "This program can convert swiming times between SCY, SCM, and LCM." << endl;
	string length;
	cin >> "What is the length of the event? Give response in form \"distance, pool length\", for example \"100 SCY\". " << length;
	string time;
	cin >> "What is the time? Give response in form \"MM:SS.DD\", for example \"04:25.36\". " << time;
	string unitTo;
	cin >> "To what pool type would you like to convert? Options: SCY, SCM, or LCM. " >> unitTo;
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
		// TODO
	}
	else if (unit = "SCM")
	{
		// TODO
	}
	else if (unit = "LCM")
	{
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