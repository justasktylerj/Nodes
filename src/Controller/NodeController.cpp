/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: tjar2074
 */
#include "NodeCoroller.h"

NodeController::NodeController()
{
	this->intNode.setValue(5);
	this->stringArrayNode.setValue("words are fun")

}

NodeController::~NodeController()
{

}

void NodeController :: start()
{
	cout << intNode.getValue();
}

