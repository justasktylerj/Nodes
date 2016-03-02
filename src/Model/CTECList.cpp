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
	Type returnValue;

			assert(size > 0);
			assert(index >= 0);
			assert(index < size);
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

	this->calculateSize();

	return returnValue;

}

template <class Type>
void CTECList<Type>::calculateSize()
{
	assert(size > 0);

	ArrayNode<Type> * counterPointer = head;
	int count = 0;
	if (counterPointer == nullptr)
	{
		this->size = 0;
		return;
	}
	else
	{
		count++;
		while (counterPointer->getNext() != nullptr)
			{
				counterPointer = counterPointer->getNext();
				count++;

			}

		this->size = count;
	}

}

template <class Type>
Type CTECList<Type>::removeFromEnd()
{

	assert(size > 0);
	Type valueToRemove;

	if(size == 1)
	{
		valueToRemove = removeFromFront();
		end = nullptr;
		calculateSize();
		return valueToRemove();
	}
	else
	{
		ArrayNode<Type> * currentNode = head;
		for(int spot = 0; spot < size-1; spot++)
		{
			currentNode = currentNode->getNext();
		}

//		ArrayNode<Type> * pointer = head;
//		while(pointer->getNext()->getNext() != nullptr)
//		{
//			pointer = pointer->getNext();
//		}

		valueToRemove = currentNode->getNext()->getValue();
		end = currentNode;
		delete currentNode->getNext();
	}

	this->calculateSize();
	return valueToRemove;
}

template <class Type>
Type CTECList<Type>::removeFromIndex(int index)
{

	assert(this->size > 0);

	assert(index >= 0 && index < size);

	Type thingToRemove;

	ArrayNode<Type> * previous, deleteMe, newNext;

	if(index == 0)
	{
		thingToRemove = removeFromFront();
	}
	else if(index == size-1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		for(int spot = 0; spot < index + 1; spot++)
		{

		}

	}

	this->calculateSize();
	return thingToRemove;
}

template <class Type>
Type CTECList<Type>::Set(int index, Type value)
{

}

