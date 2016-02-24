/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: tjar2074
 */
#include "CTECList.h"
#include <assert.h>
using namespace std;

template <class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}

template <class Type>
CTECList<Type>::~CTECList()
{

}

template <class Type>
int CTECList<Type>::getSize()
{

}

template <class Type>
void CTECList<Type>::addToFront(Type value)
{

}

template <class Type>
void CTECList<Type>::addToEnd(Type value)
{

}

template <class Type>
void CTECList<Type>::AddAtIndex(int index, Type value)
{

}

template <class Type>
Type CTECList<Type>::getFront()
{

}

template <class Type>
Type CTECList<Type>::getEnd()
{

}

template <class Type>
Type CTECList<Type>::getFromIndex(int index)
{

}

template <class Type>
Type CTECList<Type>::removeFromFront()
{
	Type returnValue;

	assert(size > 0);
	//find the next spot
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();

	//get what was in the head spot
	returnValue = this->head->getValue();
	//remove head
	delete this->head;
	//move to next spot
	this->head = newHead;

	return returnValue;

}

template <class Type>
Type CTECList<Type>::removeFromEnd()
{

}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{
	Type returnValue;

		assert(size > 0);
		assert(index >= 0);
		assert(index < size);

}

template <class Type>
Type CTECList<Type>::Set(int index, Type value)
{

}

