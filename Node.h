/*****************************************************
*	Node.h
*
*	Dustin Meckley
*	ciss350
*	6/11/15
*/

#ifndef NODE_H_
#define NODE_H_

class Node
{																						
	// -----------------------------------------------------
	//                         Class Methods: 
	// -----------------------------------------------------
	public:
		// Constructor and Destructor Methods:
		// -----------------------------------
		Node();						// Default Constructor.
		Node(int); 					// Overridden Constructor. 
		~Node();					// Destructor.
		
		// Transformer Methods:
		// --------------------
		void setValue(int);															
		
		// Inspector Methods:
		// ------------------
		int getValue() const;

	// ----------------------------------------------------
	//                         Class Members:
	// ----------------------------------------------------
	private:
		// Node item value for the linked list.
		int value;								
};

#endif 