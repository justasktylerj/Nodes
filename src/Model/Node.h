/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: tjar2074
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_

template <class Type>
class Node
{
private:
	Type value;
	Node * pointers;
public:
	Node();
	Node(Type value);
	virtual ~Node();
	Type getValue();
	void setValue
	Node * getPointers();
};


#endif /* MODEL_NODE_H_ */
