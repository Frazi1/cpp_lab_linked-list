#pragma once
#include <iterator>


template <class T>
class list_iterator: public std::iterator<std::forward_iterator_tag, node<T>>
{
private:
	node<T>* node_;

public:
	explicit list_iterator(node<T>* p) : node_(p)
	{
	}

	bool operator ==(list_iterator other)
	{
		return node_ == other.node_;
	}

	bool operator !=(list_iterator other)
	{
		return node_ != other.node_;
	}

	node<T>* operator *()
	{
		return node_;
	}

	node<T>* operator ->()
	{
		return node_;
	}

	list_iterator& operator ++()
	{
		node_ = node_->get_next();
		return *this;
	}
};
