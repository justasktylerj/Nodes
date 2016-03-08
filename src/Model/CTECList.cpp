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
	return this->size;
}

template <class Type>
void CTECList<Type>::addToFront(Type value)
{
	assert(size >= 0);

	ArrayNode<Type> newNode = new ArrayNode<Type>;
	value = newNode->setValue();
	newNode = this->end->setNext();
	newNode = this->end;
	end = newNode();
	nullptr = newNode->setNext();
	size++;
	this->calculateSize;
}

template <class Type>
void CTECList<Type>::addToEnd(Type value)
{
	assert(size >= 0);

	ArrayNode<Type> newNode = new ArrayNode<Type>;
	value = newNode->setValue();
	this->head = newNode->setNext();
	newNode = this->head;
	head = newNode;
	size++;
}

template <class Type>
void CTECList<Type>::AddAtIndex(int index, Type value)
{
	assert(size >= 0);
	assert(index >= 0 && index < size);

	ArrayNode<Type> newNode = new ArrayNode<Type>;
	ArrayNode<Type> * previous;
	value = newNode->setValue();

	if (index == 0)
	{
		newNode->addToFront();
	}
	else if (index == size -1)
	{
		newNode->addToEnd();
	}
	else
	{
		for (int spot = 0; spot < index - 1; spot++)
		{
			previous = previous->getNext();
		}
		newNode = previous->setNext();
		newNode = setNext(previous->getNext()->getNext());
		size++;
	}
}

template <class Type>
Type CTECList<Type>::getFront()
{
	Type returnValue;

	assert(size > 0);

	ArrayNode<Type> * currentNode = ArrayNode<Type>[0];
	head = currentNode;
	returnValue = this->head->getValue();

	return returnValue;
}

template <class Type>
Type CTECList<Type>::getEnd()
{
	    assert(size > 0);
		Type valueToEnd;

		if(size == 1)
		{
			valueToEnd = head();
			end = nullptr;

			return valueToEnd();
		}
		else
		{
			ArrayNode<Type> * currentNode = head;
			for(int spot = 0; spot < size-1; spot++)
			{
				currentNode = currentNode->getNext();
			}

			valueToEnd = currentNode->getNext()->getValue();
			end = currentNode->getNext();

		}
		valueToEnd = end;
		return valueToEnd;
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
//takes the first spot, deletes it.
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
	//finds out how big it is, because C++ doesn't automatically do that.
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
//finds the end if the node and deletes it
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

