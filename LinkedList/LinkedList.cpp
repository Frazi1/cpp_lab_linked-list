// LinkedList.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "List.h"
#include <vector>
#include <iostream>



int main()
{
	list<int> my_list;
	my_list.add(1);
	my_list.add(2);
	my_list.add(3);
	for(auto& x: my_list)
	{
		std::cout << x << endl;
	}
    return 0;
}

