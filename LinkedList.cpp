/*****************************************************
*	LinkedList.cpp
*
*	Dustin Meckley
*	ciss350
*	6/11/15
*/

#ifndef LINKEDLIST_CPP_
#define LINKEDLIST_CPP_

#include "LinkedList.h"

/*****************************************************
*	LinkedList()
*
*	Default constructor for LinkedList class. 
*/
LinkedList::LinkedList()
{
	head = NULL;
	next = NULL;
	length = 0;
}

/*****************************************************
*	~LinkedList()
*
*	Destructor for LinkedList class. 
*/
LinkedList::~LinkedList() 
{
	clear();
}

/*****************************************************
*	get()
*
*	get Function of the LinkedList Class
*/
int LinkedList::get(int index)
{
	if (index >= 0)
	{
		try
		{
			// Returns the element value of node at index (passed to method) 
			SingleLinkedNode* curr = head;
			int count = 0;

			if(index >= getLength() || index < 0)
				throw Exception();
			else
			{
				while (curr != NULL)
				{
					if (count == index)
						return curr->getValue();
					count++;
					curr = curr->getNext();
				}
			}
		}
		catch(Exception e)
		{
			e.message();
		}
	}
	else
	{
		throw Exception();
	}
}

/*****************************************************
*	isFull()
*
*	isFull Function of the LinkedList Class
*/
bool LinkedList::isFull() const 
{
	// Returns true if list is full  
	SingleLinkedNode* pointer;
	pointer = new SingleLinkedNode();
	if (pointer == NULL)
	{
		return true;
	}
	else
	{
		delete pointer;
		return false;
	}
	
}

/*****************************************************
*	isEmpty()
*
*	isEmpty Function of the LinkedList Class
*/
bool LinkedList::isEmpty() const
{
	// Returns true if list is empty
	return (!(bool(head)));			
	// If no head pointer to the LinkedList data structure.
}

/*****************************************************
*	getLength()
*
*	getLength Function of the LinkedList Class
*/
int LinkedList::getLength() const
{
	// Returns length of list
	return this->length;
}

/*****************************************************
*	add()
*
*	add Function of the LinkedList Class
*/
void LinkedList::add(int value, int index) 
{
	if(index >= 0)
	{
		try
		{
			// Adds node at index (passed to method)
			SingleLinkedNode* prev = new SingleLinkedNode();
		  	SingleLinkedNode* curr = new SingleLinkedNode();
		  	SingleLinkedNode* newNode = new SingleLinkedNode();
		  	newNode->setValue(value);

		  	int counter = 0;   // Traverses through the list

		  	curr = head;      // Initialize current to head;

		  	if(head != NULL)
		  	{
		    	while(curr->getNext() != NULL && counter != index)
		    	{
			        prev = curr;
			        curr = curr->getNext();
			        counter++;
			    }
		    	if(index == 0)
			    {
			       	// Call function to addNode at head.
			       	newNode->setNext(head);
			        head = newNode;
			        incLength();
			    }
			    else if(curr->getNext() == NULL && index == counter + 1)
			    {
			      	// Call function to addNode at tail.
			      	newNode->setNext(curr->getNext());
			        curr->setNext(newNode);
			   		incLength();	
			    }
			    else if(index > counter + 1)
			    {
			      	// Throw Exception if trying to add out of bounds.
			      	throw Exception();
			    }
			    else
			    {
			    	// Call function to addNode at specified index locations. 
			        prev->setNext(newNode);
			        newNode->setNext(curr);
			        incLength();
			    }
			}
			else
			{
				// Call function to addNode at the head if the list is empty.
			   	head = newNode;
			   	newNode->setNext(NULL);
			   	incLength();	
			}
		}
		catch(Exception e)
		{
			e.message();
		}
	}
	else
	{
		throw Exception();
	}
}

/*****************************************************
*	remove()
*
*	 remove Function of the LinkedList Class
*/
int LinkedList::remove(int index) 
{
	try
	{
		// Remove node at index (passed to method) and return value
		SingleLinkedNode* prev = NULL;
		SingleLinkedNode* curr = head;
		SingleLinkedNode* next = head->getNext();
		
		int retval = get(index);

		if(index >= getLength() || index < 0)
			throw Exception();
		if(index <= getLength())
		{
			for(int i = 0; i < index; i++)
			{
				prev = curr;
				curr = next;
				next = curr->getNext();
			}

			curr->setNext(new SingleLinkedNode(index));

			if (head == curr)
				head = head->getNext();		

			delete(curr);					

			if(prev)						
				prev->setNext(next);

			decLength();

			return retval;
		}
		else if(isEmpty())
		{
			head = new SingleLinkedNode(index);
			head->setNext(next);
		}
		else
		{
			for(int i = 0; i < index; i++)
			{
				prev = curr;
				curr = next;
				next = curr->getNext();
			}
			prev->setNext(new SingleLinkedNode(index));
			prev->getNext()->setNext(curr);
			incLength();
		}
	}
	catch(Exception e)
	{
		e.message();
	}
}

/*****************************************************
*	append()
*
*	append Function of the LinkedList Class
*/
void LinkedList::append(int value)
{
	if (value >= 0)
	{
		try
		{
			// Decalaration of pointers for memory allocation.
			SingleLinkedNode* newNode;
			SingleLinkedNode* nodePtr;

			// Allocate the new node and store value there
			newNode = new SingleLinkedNode();
			newNode->setValue(value);
			newNode->setNext(NULL);

			// If no nodes are in the list, then make newNode to be the first node
			if(!head)
				head = newNode;
			else
			{
				// Initialize nodePtr to head of list.
				nodePtr = head;
				// Find the last node in the list.
				while(nodePtr->getNext())
					nodePtr = nodePtr->getNext();

				// Insert newNode as the last node.
				nodePtr->setNext(newNode);
			}
			incLength();
		}
		catch(Exception e)
		{
			e.message(); 
		}
	}
	else
	{
		throw Exception();
	}
}

/*****************************************************
*	set()
*
*	set Function of the LinkedList Class
*/
void LinkedList::set(int value, int index)
{
	if(index >= 0)
	{
		try
		{
			// Overwrites the value of node at index (passed to method)
			SingleLinkedNode* curr = head;
			int count = 0;
			while (curr != NULL)
			{
				if (count == index)
					curr->setValue(value);
				count++;
				curr = curr->getNext();
			}
		}
		catch(Exception e)
		{
			e.message();
		}
	}
	else
	{
		throw Exception();
	}
}

/*****************************************************
*	clear()
*
*	clear Function of the LinkedList Class
*/
void LinkedList::clear() 
{
	// Removes all nodes from list 
	while(head)
	{
		next = head->getNext();
		delete head;
		head = next;
	}
	next = NULL;
	length = 0;
}

/*****************************************************
*	reset()
*
*	reset Function of the LinkedList Class
*/
void LinkedList::reset()
{
	// Resets counter for Next() such that call to next() will return first element. 
	next = head;
}

/*****************************************************
*	getNext()
*
*	getNext Function of the LinkedList Class
*/
int LinkedList::Next()
{
	// Returns value of next node in list
	int retval;
	if(next)
	{
		retval = next->getValue();
		next->getNext();
	}
	else
	{
		throw Exception();
	}
	return retval;
}

/*****************************************************
*	displayList()
*
*	displayList Function of the LinkedList Class
*/
void LinkedList::displayList() const
{
	// Declaration of nodePtr to point to allocated memory.
	SingleLinkedNode* nodePtr;

	// Put the nodePtr at the head of the list.
	nodePtr = head;

	// While the nodePtr points to a node, then traverse through the list
	std::cout << "Array = {"; 
	while(nodePtr)
	{
		// Display the value in the node.
		std::cout << nodePtr->getValue();
		// Move to the next node.
		nodePtr = nodePtr->getNext();
		std::cout << ", ";
	}
	std::cout << "}" << std::endl; 
}

/*****************************************************
*	incLength()
*
*	incLength Function of the LinkedList Class
*/
void LinkedList::incLength()
{
	this->length++;
}

/*****************************************************
*	decLength()
*
*	decLength Function of the LinkedList Class
*/
void LinkedList::decLength()
{
	this->length--;
}

#endif