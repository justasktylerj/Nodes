/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: tjar2074
 */
#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{

}

template <class Type>
CTECArray<Type>::~CTECArray()
{

}

template <class Type>
int CTECArray<Type>::getSize()
{
	return this->size;
}

template <class Type>
Type* CTECArray<Type>:: get(int position)
{
	if(position >= size || position < 0)
		{
			return nullptr;
		}
	else
	{
		ArrayNode<Type> * current = head;
		//inclusive because i am inside the bounds guarenteed
		for(int spot = 0; spot <= position; spot++)
		{

			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
	}
}

template <class Type>
void CTECArray<Type>:: set(int position, Type value)
{
	if(position >= size ||position < 0)
	{
		cerr << "don't do that!" << endl;
	}
	else
	{

	}
}


