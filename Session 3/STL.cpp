#include<iostream>
#include<set>
#include<map>
using namespace std;

void setDemo() {

	int a = 10;

	// set of integers
	set<int> s;

	s.insert(1);
	s.insert(2);
	s.insert(1);
	s.insert(1);
	s.insert(-10);
	s.insert(78);
	s.insert(25);
	s.insert(16);

	for (auto it = s.begin(); it != s.end(); it++) {
		cout << (*it) << endl;
	} cout << endl;

	// erase()
	s.erase(25);

	for (auto it = s.begin(); it != s.end(); it++) {
		cout << (*it) << endl;
	}

	// find()
	auto it = s.find(-10);
	// if element is not present s.end() will be returned
	cout << (*it) << endl;

	it = s.find(1);
	if (it != s.end()) {
		cout << "Found";
	} else {
		cout << "Not found";
	}

	// lower_bound() -> first element that is greater than or eql to the element
	it = s.lower_bound(16);
	cout << (*it) << endl;
	// strictly greater element
	it = s.upper_bound(16);
	cout << (*it) << endl;
}

void mapDemo() {

	// map of strings to int
	// a map is a collection of pairs
	map<string, int> menu;

	menu.insert({"Burger", 30});
	menu.insert({"Pulao", 50});
	menu.insert({"Coke", 30});
	menu.insert({"Pizza", 100});

	for (auto it = menu.begin(); it != menu.end(); it++) {
		pair<string, int> p = *it;

		cout << p.first << " " << p.second << endl;

	} cout << endl;

	menu.erase("Pizza");

	for (auto it = menu.begin(); it != menu.end(); it++) {
		pair<string, int> p = *it;

		cout << p.first << " " << p.second << endl;
	}
}

int main() {

	// setDemo();
	mapDemo();

}