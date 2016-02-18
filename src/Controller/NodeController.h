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

#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/Timer.h"

using namespace std;

class NodeController
{
private:
	CTECArray<int> * myIntArray;
	Timer arrayTimer;
public:
	NodeController();
	virtual ~NodeController();
	void start();

};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
