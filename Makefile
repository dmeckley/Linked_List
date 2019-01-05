list : main.o LinkedList.o SingleLinkedNode.o Node.o
	clang++ main.o LinkedList.o SingleLinkedNode.o Node.o -o list

main.o : main.cpp LinkedList.h SingleLinkedNode.h Node.h
	clang++ -c main.cpp

LinkedList.o : LinkedList.cpp LinkedList.h
	clang++ -c LinkedList.cpp
	
SingleLinkedNode.o : SingleLinkedNode.cpp SingleLinkedNode.h
	clang++ -c SingleLinkedNode.cpp

Node.o : Node.cpp Node.h
	clang++ -c Node.cpp

clean : 
	rm -f *.o list
	