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
			auto& current_last = last_;
			current_last->set_next(new_node);
			last_ = current_last->get_next();
			last_->set_prev(current_last);
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
		list_iterator<T> iter = begin();
		while (iter != iterator || iter != end())
			++iter;

		node<T>* next = (*iter).get_next();
		node<T>* prev = (*iter).get_prev();
		next->set_prev(prev);
		prev->set_next(next);
	}
};
