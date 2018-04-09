#pragma once
#include <functional>
#include "ListIterator.h"

using namespace std;

template <class T>
class list
{
private:
	node<T>* first_;

	//node<T>* find_last();
public:
	void add(const T& item);
	//void remove(function<bool(T*)> predicate);
	list_iterator<T> begin()
	{
		return list_iterator<T>(first_);
	}

	list_iterator<T>& end()
	{
		list_iterator<T> iterator(nullptr);
		return iterator;
	}
};


template <class T>
void list<T>::add(const T& item)
{
	node<T>* new_node = new node<T>(&item);
	if (first_ == nullptr)
	{
		first_ = new_node;
	}
	else
	{
		//node<T>* last = find_last();
		//last->set_next(new_node);
		//new_node->set_prev(last);
	}
}
