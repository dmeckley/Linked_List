/*****************************************************
*	LinkedList.h
*
*	Dustin Meckley
*	ciss350
*	6/11/15
*/

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "Node.h"
#include "SingleLinkedNode.h"

#include <iostream>
#include <stddef.h>

class LinkedList
{ 
	// -----------------------------------------------------
	//                   Class Methods: 
	// -----------------------------------------------------
public:
	
	// Exception Handler Inner Class:
	// ------------------------------
	class Exception
	{
		public:
			void message()
			{
				std::cerr << "LinkedList Exception Thrown!" 
						  << std::endl << std::endl;
			}
	};

	// Constructor and Destructor Methods:
	// -----------------------------------
	LinkedList();								// Default Constructor	
	~LinkedList();								// Destructor

	// Observer Function Methods:
	// -----------------------------------
	//returns value of element at index, leaving in place, null/exception if fail
	int get(int);	

	//returns true if no new elements can be added to list						
	bool isFull() const;														

	//returns true if list contains no elements			
	bool isEmpty() const;														

	//returns the length of the list						
	int getLength() const;																		
	
	// Transformer Function Methods:
	// -----------------------------------
	//adds element to list, false/exception if fail
	void add(int, int);															

	//removes element at index from list and returns, null/exception on error							
	int remove(int);															

	//inserts element at index to T, false/exception if fail					
	void append(int);															

	//sets element at index to T, false/exception if fail					
	void set(int, int);															

	//removes all elements from list						
	void clear();																

	//resets counter for iterator										
	void reset();																														
	
	// Iterator Function Methods:
	// -----------------------------------
	//returns next item on list, based on counter	
	int Next();															

	// Print the linked list to the user
	void displayList() const;													

protected:

	// Increments the length of the list by one
	void incLength();															

	// Decrements the length of the list by one								
	void decLength();															

	// ----------------------------------------------------
	//                   Class Members:
	// ----------------------------------------------------
private:

	// Pointer of the SingleLinkedNode data type named head 
	// for the initial element memory address location of the 
	// linked list.
	SingleLinkedNode* head;						
	
	// Pointer of the SingleLinkedNode data type named next 
	// which is the iterator of the element memory address 
	// locations of the linked list.
	SingleLinkedNode* next;						
	
	// Integer data type for tracking the length of the list.
	int length;										
};

#endif