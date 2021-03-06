// LinkedList.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "List.h"
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
	list<int> my_list;
	my_list.add(1);
	my_list.add(2);
	my_list.add(3);
	for (node<int>* x : my_list)
	{
		cout << x->get_value() << endl;
	}


	list<string> str_list;
	str_list.add("test");
	str_list.add("test2");
	str_list.add("test2");
	str_list.add("test3");
	for (node<string>* x : str_list)
	{
		cout << x->get_value() << endl;
	}

	int counter =
		count_if(str_list.begin(), str_list.end(), [](node<string>* s)
		{
			return s->get_value() == "test2";
		});
	cout << counter << endl;

	list_iterator<basic_string<char>> r_iterator = find_if(str_list.begin(), str_list.end(), [](node<string>* s)
	{
		return s->get_value() == "test2";
	});
	str_list.remove(r_iterator);
	for (node<string>* x : str_list)
	{
		cout << x->get_value() << endl;
	}

	return 0;
}
