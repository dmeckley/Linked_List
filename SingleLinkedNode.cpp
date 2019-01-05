/*****************************************************
*	SingleLinkedNode.cpp
*
*	Dustin Meckley
*	ciss350
*	6/11/15
*/

#ifndef SINGLELINKEDNODE_CPP_
#define SINGLELINKEDNODE_CPP_

#include "Node.h"
#include "SingleLinkedNode.h"

#include <cstddef>

/*****************************************************
*	SingleLinkedNode()
*
*	SingleLinkedNode Default Constructor
*/
SingleLinkedNode::SingleLinkedNode() : Node ()					
{
	next = NULL; 
}

/*****************************************************
*	SingleLinkedNode(int value)
*
*	SingleLinkedNode Ovverridden Constructor
*/
SingleLinkedNode::SingleLinkedNode(int value) : Node (value)		
{ 
	next = NULL; 
}

/*****************************************************
*	~SingleLinkedNode()
*
*	SingleLinkedNode Destructor
*/
SingleLinkedNode::~SingleLinkedNode() 		
{ 
	
}

/*****************************************************
*	getNext()
*
*	getNext SingleLinkedNode Method
*/
SingleLinkedNode* SingleLinkedNode::getNext() const
{
	// Returns the pointer at the next node memory address.
	return this->next;									
}

/*****************************************************
*	setNext()
*
*	setNext SingleLinkedNode Method
*/
void SingleLinkedNode::setNext(SingleLinkedNode* next)
{
	// Sets the pointer to the next node memory address.
	this->next = next;									
}

#endif 