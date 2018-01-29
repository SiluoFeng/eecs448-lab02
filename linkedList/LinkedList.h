/**
*	@file LinkedList.h
*	@author
*	@date
*	@brief A header file for templated LinkedList class
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <vector>
#include "Node.h"

template <typename T>
class LinkedList
{
	public:

	LinkedList();


	~LinkedList();


	bool isEmpty() const;


	int size() const;

	bool search(T value) const;

	std::vector<T> toVector() const;

	void addBack(T value);

	void addFront(T value);


	bool removeBack();

	
	bool removeFront();

	private:
	Node<T>* m_front;
	T m_size;
};

#include "LinkedList.hpp"

#endif
