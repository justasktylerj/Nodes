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


}

template<class Type>
ArrayNode<Type>::ArrayNode(Type value) : Node<Type>(value)
{

}

template<class Type>
ArrayNode<Type>::ArrayNode(Type value, ArrayNode * next) : Node<Type>(value)
{

}

template<class Type>
ArrayNode<Type>::~ArrayNode() : Node<Type>()
{

}

