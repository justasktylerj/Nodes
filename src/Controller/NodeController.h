/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: tjar2074
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include<string>
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/CTECArray.h"

using namespace std;

class NodeController
{
private:
//	Node<int> intNode;
//	ArrayNode<string> stringArrayNode;
	CTECArray<string> * myStringArray;
public:
	NodeController();
	virtual ~NodeController();
	void setValue();
	void getValue();
	void start();

};



#endif /* CONTROLLER_NODECONTROLLER_H_ */
