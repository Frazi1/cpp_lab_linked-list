#pragma once
#include <iterator>


template <class T>
class list_iterator : public std::iterator<std::forward_iterator_tag, node<T>>
{
private:
	node<T>* iter_;

public:
	explicit list_iterator(node<T>* p) : iter_(p)
	{
	}

	bool operator ==(list_iterator& other)
	{
		return iter_ == other.iter_;
	}

	bool operator !=(list_iterator& other)
	{
		return iter_ != other.iter_;
	}

	T& operator *()
	{
		return iter_->get_value();
	}

	T& operator ->()
	{
		return iter_->get_value();
	}

	list_iterator& operator ++()
	{
		iter_ = iter_->get_next();
		return *this;
	}
};
