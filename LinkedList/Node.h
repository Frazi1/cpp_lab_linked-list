#pragma once

template <class T>
class node
{
private:
	node<T>* next_;
	node<T>* prev_;
	T* value_;

public:

	explicit node(T* value)
		: value_(value)
	{
	}

	node<T>* get_next() const;
	void set_next(node<T>* const next);
	node<T>* get_prev() const;
	void set_prev(node<T>* const prev);
	T* get_value() const;
	void set_value(T* const value);
};

template <class T>
node<T>* node<T>::get_next() const
{
	return next_;
}

template <class T>
void node<T>::set_next(node<T>* const next)
{
	next_ = next;
}

template <class T>
node<T>* node<T>::get_prev() const
{
	return prev_;
}

template <class T>
void node<T>::set_prev(node<T>* const prev)
{
	prev_ = prev;
}

template <class T>
T* node<T>::get_value() const
{
	return value_;
}

template <class T>
void node<T>::set_value(T* const value)
{
	value_ = value;
}
