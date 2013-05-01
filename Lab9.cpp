#include <iostream>
#include <string>
#include <map>

using namespace std;

struct addressEntry
{
	string	streetAddress,
			state;
	int	zipCode;

};

class addressBook
{
private:
	map <string, addressEntry> addressMap;
public:
	addressEntry getEntry(string);

	void setEntry(string index, addressEntry newEntry)
	{
		addressMap[index] = newEntry;
	}

	void setStreetAddress(string index, string address)
	{
		addressMap[index].streetAddress = address;
	}

	void setState(string index, string newState)
	{
		addressMap[index].state = newState;
	}

	void setZipCode(string index, int newZip)
	{
		addressMap[index].zipCode = newZip;
	}

	void displayMenu()
	{
		cout << "Please select from one of the following:\n";
		cout << "Enter 1 to view an entry.\n";
		cout << "Enter 2 to add an entry.\n";
		cout << "Enter 3 to remove an entry.\n";
		cout << "Enter 4 to change and entry.\n";
		cout << "Enter 5 to display all entries.\n";
		cout << "Enter 6 to exit.\n";
	}

	void displayAddress();
	void displayAddressBook();
	void addEntry();
	void changeEntry();
	void removeEntry();
};
