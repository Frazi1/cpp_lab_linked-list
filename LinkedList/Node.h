#pragma once

template <class T>
class node
{
private:
	node<T>* next_;
	node<T>* prev_;
	T value_;

public:

	explicit node(T value);

	node<T>* get_next() const;
	node<T>* get_prev() const;
	T& get_value();
	void set_next(node<T>* next);
	void set_prev(node<T>* prev);
	void set_value(T* value);
};

template <class T>
node<T>::node(T value) : value_(value)
{
}

template <class T>
node<T>* node<T>::get_next() const
{
	return next_;
}

template <class T>
node<T>* node<T>::get_prev() const
{
	return prev_;
}

template <class T>
T& node<T>::get_value()
{
	return value_;
}

template <class T>
void node<T>::set_next(node<T>* next)
{
	next_ = next;
}

template <class T>
void node<T>::set_prev(node<T>* prev)
{
	prev_ = prev;
}

template <class T>
void node<T>::set_value(T* value)
{
	value_ = value;
}






