/*
 * ArrayNode.h
 *
 *  Created on: Jan 29, 2016
 *      Author: tjar2074
 */

#ifndef MODEL_ARRAYNODE_H_
#define MODEL_ARRAYNODE_H_

#include "Node.h"

class ArrayNode: public Node
{
private:
 ArrayNode();
public:
	ArrayNode();
	ArrayNode(Type value);
	ArrayNode(Type value, ArrayNode * next);
	virtual ~ArrayNode();
};

#endif /* MODEL_ARRAYNODE_H_ */
