#pragma once
#include <functional>

using namespace std;

template <class T>
class list
{
private:
	node<T>* first_;

	itera
	node<T>* find_last();
public:
	void add(T* item);
	void remove(function<bool(T*)> predicate);
};

template <class T>
node<T>* list<T>::find_last()
{
	node<T>* curr = first_;
	if (curr == nullptr)
		return nullptr;
	while (curr->get_next() != nullptr)
		curr = curr->get_next();
	return curr;
}

template <class T>
void list<T>::add(T* item)
{
	node<T>* new_node = new node<T>(item);
	if (first_ == nullptr)
	{
		first_ = new_node;
	}
	else
	{
		node<T>* last = find_last();
		last->set_next(new_node);
		new_node->set_prev(last);
	}
}
