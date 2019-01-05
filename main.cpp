/*****************************************************
*	main.cpp
*
*	Dustin Meckley
*	ciss350
*	6/11/15
*/

#include <iostream>
#include <cstdlib>

#include "Node.h"
#include "SingleLinkedNode.h"
#include "LinkedList.h"

/*****************************************************
*	main()
*
*	Test Driver for execution of program.
*/
int main()
{
	try
	{
		std::cout << std::endl;

		// Demonstrate Linked List Class Object Instance.
		LinkedList list;

		// Determines if the list is full or empty of the empty list.
		std::cout << "Diplaying isFull & isEmpty of the list" << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "isFull() = " << list.isFull() << std::endl;
		std::cout << "isEmpty() = " << list.isEmpty() << std::endl << std::endl;

		// Demonstrate an empty list.
		std::cout << "Displaying the Empty List" << std::endl;
		std::cout << "-------------------------" << std::endl;
		list.displayList();		
		std::cout << "Length = " << list.getLength() << std::endl << std::endl;
			
		// Adds the values and a node at the end of the linked list.
		std::cout << "Appending an element to the empty List" << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		list.append(45);
		list.displayList();	
		std::cout << "Length = " << list.getLength() << std::endl << std::endl;

		// Adds the values and a node at the end of the linked list.
		std::cout << "Appending another element to the List" << std::endl;
		std::cout << "-------------------------------------" << std::endl;
		list.append(65);
		list.displayList();
		std::cout << "Length = " << list.getLength() << std::endl << std::endl;

		// Adds the values and a node at the end of the linked list.
		std::cout << "Appending another element to the List" << std::endl;
		std::cout << "-------------------------------------" << std::endl;
		list.append(55);
		list.displayList();
		std::cout << "Length = " << list.getLength() << std::endl << std::endl;

		// Displaying the length of the list.
		std::cout << "Displaying the length of the List" << std::endl;
		std::cout << "---------------------------------" << std::endl;
		std::cout << "Length = " << list.getLength() << std::endl << std::endl;

		// Determines if the list is full or empty after appending to the list.
		std::cout << "Diplaying isFull & isEmpty of the list" << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "isFull() = " << list.isFull() << std::endl;
		std::cout << "isEmpty() = " << list.isEmpty() << std::endl << std::endl;
		
		// Resetting the counter for the linked list to the beginning.
		std::cout << "Reseting counter to the linked list and then calling" << std::endl;
		list.reset();
		std::cout << "the Next() function back at beginning of list" << std::endl;
		std::cout << "-----------------------------------------------------" << std::endl;
		std::cout << "The pointer now points to the " << list.Next() << " value" << std::endl << std::endl;

		// Overwrites the value at a specified node index in the linked list.
		std::cout << "Setting or Overwritiing an element to the List" << std::endl;
		std::cout << "----------------------------------------------" << std::endl;
		list.displayList();
		std::cout << "Overwritting 65 value to 50 value in location # 1" << std::endl;
		list.set(50, 1);
		list.displayList();
		std::cout << "Length = " << list.getLength() << std::endl << std::endl;
		
		// Gets the value at a specified node index in the linked list.
		std::cout << "Getting an element from the List" << std::endl;
		std::cout << "--------------------------------" << std::endl;
		list.displayList();
		std::cout << "Getting value from location # 2 which is: " << list.get(2) << std::endl;
		std::cout << "Length = " << list.getLength() << std::endl << std::endl;
		
		// Adds the values and a node at a specified node index in the linked list.
		std::cout << "Adding an element and node to the List" << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		list.displayList();
		std::cout << "Adding node and value of 60 to element location # 3: " << std::endl;
		list.add(60, 3);
		list.displayList();
		std::cout << "Length = " << list.getLength() << std::endl << std::endl;

		// Removes the values and a node at a specified node index in the linked list.
		std::cout << "Removing an element and node from the List" << std::endl;
		std::cout << "------------------------------------------" << std::endl;
		list.displayList();
		std::cout << "Removing node and returning value of 55 from element location # 2: " << std::endl;
		list.remove(2);
		list.displayList();
		std::cout << "Length = " << list.getLength() << std::endl << std::endl;

		// Clear the linked list and sets the linked list to zero.
		std::cout << "Clearing all elements and nodes of the List" << std::endl;
		std::cout << "-------------------------------------------" << std::endl;
		list.displayList();
		std::cout << "Clearing all nodes and values from the linked list: " << std::endl;
		list.clear();
		list.displayList();
		std::cout << "Length = " << list.getLength() << std::endl << std::endl;

		// Determines if the list is full or empty after clear.
		std::cout << "Diplaying isFull & isEmpty of the list" << std::endl;
		std::cout << "--------------------------------------" << std::endl;
		std::cout << "isFull() = " << list.isFull() << std::endl;
		std::cout << "isEmpty() = " << list.isEmpty() << std::endl << std::endl;
			
	}
	catch(LinkedList::Exception e)
	{
		e.message();
		exit(0);
	}
	
	return 0;
}
		/*
		LinkedList list;
		displayList();
		append();
		getLength();
		isEmpty();
		isFull();

		getNext();
		add();
		delete();

		clear();

		Repeat testing again without utilizing the clear funtion 
		letting the destructorclear the list instead
		*/