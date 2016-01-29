/*
 * ArrayNode.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: tjar2074
 */

#include "ArrayNode.h"

template<class Type>
ArrayNode<Type>::ArrayNode() : Node<Type>()
{

this->next = nullptr;
}

template<class Type>
ArrayNode<Type>::ArrayNode(Type value) : Node<Type>(value)
{
	this->value = value;
	this->next = nullptr;
}

template<class Type>
ArrayNode<Type>::ArrayNode(Type value, ArrayNode * next) : Node<Type>(value)
{
	this->value = value;
		this->next = nullptr;
}

template<class Type>
ArrayNode<Type>::~ArrayNode() : Node<Type>()
{

}

