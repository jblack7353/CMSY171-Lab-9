#include <iostream>
#include <string>
#include <map>

using namespace std;

struct addressEntry
{
  string	streetAddress,
		state;
	int zipCode;
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
			addressMap[index].addressEntry.streetAddress = address;
		}
		
		void setState(string index, string newState)
		{
			addressMap[index].addressEntry.state = newState;
		}
		
		void setZipCode(string index, int newZip)
		{
			addressMap[index].addressEntry.zipCode = newZip;
		}
		
		void displayMenu()
		{
			cout << "Please select from one of the following\n";
			cout << "Enter 1 to view an entry.\n";
			cout << "Enter 2 to add an entry.\n";
			cout << "Enter 3 to remove an entry.\n";
			cout << "Enter 4 to change an entry.\n";
			cout << "Enter 5 to display all entries.\n";
			cout << "Enter 6 to exit.\n";
		}
		
		void displayAddress();
		void displayAddressBook();
		void addEntry();
		void changeEntry(string);
		void removeEntry(string);
};

int main()
{
	int choice;
	addressBook newAddressBook;
	
	do
	{
		newAddressBook.displayMenu();
		cout << "Enter your choice(1-6): ";
		while(choice > 6 || choice < 0)
		{
			cout << "Please select a number between 1 an 6: ";
			cin >> choice;
		}
		
		if(choice == 1)
		{
			newAddressBook.displayAdress();
		}
		else if(choice == 2)
		{
			newAddressBook.addEntry();
		}
		else if(choice == 3)
		{
			newAddressBook.removeEntry();
		}
		else if(choice == 4)
		{
			newAddressBook.changeEntry();
		}
		else if(choice == 5)
		{
			newAddressBook.displayAddressBook();
		}
	} while(choice != 6);
}
