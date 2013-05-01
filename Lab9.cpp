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
