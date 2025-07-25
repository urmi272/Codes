// C++ program to show the implementation of List
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

// function for printing the elements in a list
void showlist(list<int> g)
{
	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

// Driver Code
int main()
{

	list<int> list1, list2;

	for (int i = 0; i < 5; ++i) {
		list1.push_back(i * 2);
		list2.push_front(i * 3);
	}
	cout << "\nList 1 (List1) is : ";
	showlist(list1);

	cout << "\nList 2 (List2) is : ";
	showlist(list2);

	cout << "\nList1.front() : " << list1.front()<<endl;
	cout << "\nList1.back() : " << list1.back()<<endl;

	cout << "\nList1.pop_front() : ";
	list1.pop_front();
	showlist(list1);

	cout << "\nList2.pop_back() : ";
	list2.pop_back();
	showlist(list2);

	cout << "\nList1.reverse() : ";
	list1.reverse();
	showlist(list1);

	cout << "\nList2.sort(): ";
	list2.sort();
	showlist(list2);

	cout<<"\nBefore Swapping";
	cout<<"\nList1 ::";
	showlist(list1);
	cout<<"\nList2 ::";
	showlist(list2);

	list1.swap(list2);

	cout<<"\nAfter Swapping";
	cout<<"\nList1 ::";
	showlist(list1);
	cout<<"\nList2 ::";
	showlist(list2);


	return 0;
}
