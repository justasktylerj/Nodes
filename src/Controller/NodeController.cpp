/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: tjar2074
 */
#include "NodeController.h"

NodeController::NodeController()
{
	myIntArray = new CTECArray<int>(5);
}

NodeController::~NodeController()
{

}

void NodeController :: start()
{
	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		myIntArray->set(index, (2* index));
	}

	for(int index = 0; index < myIntArray->getSize(); index++)
	{
		cout << "not hipster ints at index" << index << "contains" << myIntArray->get(index) << endl;
	}
}

