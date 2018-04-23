#pragma once
#include <functional>
#include "ListIterator.h"
#include <algorithm>

using namespace std;

template <class T>
class list
{
private:
	node<T>* first_{};
	node<T>* last_{};
public:

	list() = default;
	~list()
	{
		delete first_;
	}

	void add(T item)
	{
		node<T>* new_node = new node<T>(item);
		if (first_ == nullptr)
		{
			first_ = new_node;
			last_ = first_;
		}
		else
		{
			last_->set_next(new_node);
			new_node->set_prev(last_);
			last_ = new_node;
		}
	}

	list_iterator<T> begin()
	{
		return list_iterator<T>(first_);
	}

	list_iterator<T> end()
	{
		list_iterator<T> iterator(nullptr);
		return iterator;
	}

	void remove(list_iterator<T>& iterator)
	{
		node<T>* current = *iterator;
		node<T>* next = current->get_next();
		node<T>* prev = current->get_prev();
		next->set_prev(prev);
		prev->set_next(next);

		current->set_next(nullptr);
		delete current;
	}
};
