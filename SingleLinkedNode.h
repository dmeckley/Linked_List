/*****************************************************
*	SingleLinkedNode.h
*
*	Dustin Meckley
*	ciss350
*	6/11/15
*/

#ifndef SINGLELINKEDNODE_H_
#define SINGLELINKEDNODE_H_

#include "Node.h"

#include <stddef.h>

class SingleLinkedNode : public Node 
{						
	// -----------------------------------------------------
	//                         Class Methods: 
	// -----------------------------------------------------
	public:
		// Constructor and Destructor Methods:
		// -----------------------------------
		SingleLinkedNode();								// Default Constructor.		
		SingleLinkedNode(int);							// Overridden Constructor.
		~SingleLinkedNode();							// Destructor.

		// Transformer Methods:
		// --------------------
		void setNext(SingleLinkedNode*);						
		
		// Inspector Methods:
		// ------------------
		SingleLinkedNode* getNext() const;	

	// ----------------------------------------------------
	//                         Class Members:
	// ----------------------------------------------------
	private:
		// Pointer of SingleLinkedNode type named next for 
		// memory addressing of the node.
		SingleLinkedNode* next;									
};

#endif 