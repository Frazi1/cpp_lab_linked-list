#pragma once

template <class T>
class node
{
private:
	node<T>* next_;
	node<T>* prev_;
	T value_;

public:
	explicit node(T value) : value_(value) {}
	
	~node()
	{
		if (next_ != nullptr) delete next_;
	}

	node<T>* get_next() const
	{
		return next_;
	}

	node<T>* get_prev() const
	{
		return prev_;
	}

	T& get_value()
	{
		return value_;
	}

	void set_next(node<T>* next)
	{
		next_ = next;
	}
	void set_prev(node<T>* prev)
	{
		prev_ = prev;
	}
	void set_value(T* value)
	{
		value_ = value;
	}
};





